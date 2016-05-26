package es.usc.citius.lab.joctomap.util;

import java.io.FileNotFoundException;
import java.io.IOException;

import org.apache.commons.cli.CommandLine;

import es.usc.citius.lab.joctomap.octree.JOctree;
import java.text.DecimalFormat;

/**
 * Builder for {@link JOctree}. Main functionality of this class is to instantiate 
 * the octrees from previous information. The following are included:
 * <ul>
 * 		<li>Obtain a new {@link JOctree} from a PPM image</li>
 * </ul>
 * 
 * @author Adrián González Sieira <adrian.gonzalez@usc.es>
 */
public class JOCtreeBuilder extends Module{

    @Override
    public String getName() {
        return "ppmot";
    }

    @Override
    public void execute(CommandLine args) {
        //retrieve input args
        String[] inputArgs = args.getOptionValues("i");
        //process the ppm to generate an octree
        JOctree octree = octreeFromPPM(
                inputArgs[0], 
                Float.parseFloat(inputArgs[1]),
                Float.parseFloat(inputArgs[2]),
                Float.parseFloat(inputArgs[3]),
                Integer.parseInt(inputArgs[4])
        );
        //write octree to file (.ot extension mandatory)
        String outputPath = args.getOptionValue("o");
        if(!outputPath.endsWith(".ot")) { outputPath = outputPath.concat(".ot"); }
        System.out.println("Saving to " + outputPath);
        octree.write(outputPath);
    }

    /**
     * Instantiates a new {@link JOctree} and puts the information contained in a {@link PPMFileReader}.
     * @param input where the PPM file is located
     * @param resolution min size of the cells
     * @param sizeX max. size of the X dimension of the map
     * @param sizeY max. size of the Y dimension of the map
     * @param maxDepthCell number of levels which a cell is allowed to compact
     * @return
     */
    public static JOctree octreeFromPPM(String input, float resolution, float sizeX, float sizeY, int maxDepthCell){
        //read the ppm file 
        PPMFileReader reader = null;
        //open file and read data from
        try {
            JOctomapLogger.info("Reading file " + input + "...");
            reader = new PPMFileReader(input);
        } catch (FileNotFoundException ex) {
            JOctomapLogger.severe("Could not open the file specified: " + ex);
        } catch (IOException ex) {
            JOctomapLogger.severe("An I/O error occured processing the file: " + ex);
        }
        //instantiate new octree
        JOctree octree = JOctree.create(resolution);
        float resX = sizeX / (reader.getPixels().length - 1);
        float resY = sizeY / (reader.getPixels()[0].length - 1);
        float sizeZ = octree.getNodeSize(octree.getTreeDepth() - maxDepthCell);
        JOctomapLogger.info("Generating octomap structure with following params:"
                + "\n\t* Resolution: " + resolution
                + "\n\t* Dimensions: [" + sizeX + ", " + sizeY + ", " + sizeZ + "]");
        //to show percentage of operation done
        DecimalFormat formatter = new DecimalFormat("0.00%");
        int iterations = (int) (sizeZ / octree.getResolution()) * 2;
        //iterate over the read pixels to update the information of the nodes
        int currentIteration = 0;
        for(float z = 0f; z < sizeZ; z += octree.getResolution() / 2f){
            for (float x = 0; x < sizeX; x += octree.getResolution() / 2f) {
                for (float y = 0; y < sizeY; y += octree.getResolution() / 2f) {
                    int[] rgb = reader.getPixels()[Math.round(x / resX)][Math.round(y / resY)];
                    //occupied case: one of the color components reaches the maximum value of the file
                    boolean occupied = rgb[0] < 10 && rgb[1] < 10 && rgb[2] < 10;
                    //update occupancy information
                    octree.updateNode(x, sizeY - y, z, occupied);
                }
            }
            currentIteration++;
            System.out.print("\r" + formatter.format((float) currentIteration / (float) iterations));
        }
        JOctomapLogger.info("Pruning octomap...");
        //prunes octree
        octree.updateInnerOccupancy();
        octree.prune();
        return octree;
    }
	
}
