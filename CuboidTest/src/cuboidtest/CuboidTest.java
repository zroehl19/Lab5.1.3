/*
 * STEP1:
 * Create a generic class called Cuboid that will store the three dimensions of a cuboid. 
 * Add methods to set and get the length, breadth and Height. 
 * Add a method public String toString() that will return all of the dimensions. 
 * The type of the dimensions will be decided at construction of the cuboid instance. 
 * Example:
 *      Cuboid<Double> c1 = new Cuboid<>();
 *      Cuboid<String> c1 = new Cuboid<>();
 *   
 * STEP 2:
 * Modify your generic class Cuboid so that it only accepts Numbers. 
 * Add a method with the following definition and complete its body. 
 * Hint: Look at the method doubleValue() in the Number class.
 * public double getVolume(){ ...... }
 */
package cuboidtest;

/**
 *
 * @author
 * @email 
 */
public class CuboidTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Cuboid<Integer> c1 = new Cuboid<>();
        Cuboid<Integer> c2 = new Cuboid<>(3,4,5);
        
        c1.setLength(3);
        c1.setWidth(5);
        c1.setHeight(4);
        
        c1.getLength();
        c2.getLength();
        c1.getWidth();
        c2.getWidth();
        c1.getHeight();
        c2.getHeight();
        
        System.out.println(c1.toString());
        System.out.println(c2.toString());
        
        System.out.println("Volume = " + c1.Volume());
        System.out.println("Volume = " + c2.Volume());
    }
    
}
