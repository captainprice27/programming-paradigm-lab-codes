package assignment_6;

import java.util.ArrayList;

public class Shape {
    // abstract class for different geometric shapes
    public double getArea() 
    {
        return 0.0;
    }
}

class Triangle extends Shape 
{
    // data members
    private double base;
    private double height;

    // constructor
    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    // implementation of getArea() method

    public double getArea() 
    {
        return 0.5 * base * height;
    }
}

class Rectangle extends Shape 
{
    // data members

    private double length;
    private double width;

    // constructor

    public Rectangle(double length, double width) 
    {
        this.length = length;
        this.width = width;
    }

    // implementation of getArea() method

    public double getArea() 
    {
        return length * width;
    }
}

class Circle extends Shape 
{
    // data members
    private double radius;

    // constructor
    public Circle(double radius) {
        this.radius = radius;
    }

    // implementation of getArea() method
    public double getArea() {
        return Math.PI * radius * radius;
    }
}

class Main1 
{
    public static void main(String[] args) 
    {
        // create a collection of different shapes

        ArrayList<Shape> shapes = new ArrayList<>();  /*We can create an empty Array list by reference name                                            
                                                                //ArrayList arr_name = new ArrayList();  */

        shapes.add(new Triangle(4.0, 6.0));
        shapes.add(new Rectangle(5.0, 8.0));
        //shapes.add(new Circle(3.0));
        shapes.add(new Triangle(3.0, 2.0));
        shapes.add(new Rectangle(7.0, 2.0));
        //shapes.add(new Circle(4.0));

        // calculate total area covered by the shapes
        double totalArea = 0.0;
        for (Shape shape : shapes) {
            totalArea += shape.getArea();
        }

        // display the result
        System.out.println("\n");
        System.out.println("Total area covered by the shapes: " + totalArea);
        //String string = "\n" ;
    }
}
