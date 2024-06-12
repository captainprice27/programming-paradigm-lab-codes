//package assignment_6;

import java.util.Scanner;

public class Student 
{

    // data members

    private String name;  // since name would be a string
    private int age;
    private String department;
    private String roll;
    private int year;
    

    // member functions

    public void readData() // reads data from the user input
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name: ");
        this.name = sc.nextLine();

        System.out.print("Enter age: ");
        this.age = sc.nextInt();

        sc.nextLine(); // consume newline character

        System.out.print("Enter department: ");
        this.department = sc.nextLine();

        System.out.print("Enter the roll number: ");
        this.roll = sc.nextLine();

        System.out.print("Enter year: ");
        this.year = sc.nextInt();

        sc.close(); // closing the scanner ...
    }

    public void printData()  // prints the data provided by user input
    {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Department: " + this.department);
        System.out.println("Roll: " + this.roll);
        System.out.println("Year: " + this.year);
    }



    public static void main(String[] args) 
    {
        // create a new Student object
        Student student1 = new Student();

        System.out.println ("\n");
        System.out.println ("Entering the student data");

        // read data for the student
        student1.readData();

        System.out.println ("\n");
        System.out.println ("Displaying the entered data");
        
        // print data for the student
        student1.printData();
    }
}