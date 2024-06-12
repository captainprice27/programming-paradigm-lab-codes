//package assignment_6;

import java.util.Scanner;

public class StudentDetails {

    public static void main(String[] args) 
    {

        Scanner sc = new Scanner(System.in);

        // enter number of students

        System.out.print("Enter the number of students: ");
        int numStudents = sc.nextInt();

        // create arrays to store names and roll numbers

        String[] names = new String[numStudents];
        int[] rollNumbers = new int[numStudents];

        // take input for each student and store in arrays

        for (int i = 0; i < numStudents; i++)
        {
            System.out.print("Enter name of student " + (i + 1) + ": ");
            names[i] = sc.next();
            System.out.print("Enter roll number of student " + (i + 1) + ": ");
            rollNumbers[i] = sc.nextInt();
        }

        // print out the details of each student
        System.out.println("Student Details:");
        for (int i = 0; i < numStudents; i++) 
        {
            System.out.println("Name: " + names[i] + ", Roll Number: " + rollNumbers[i]);
        }

        // close the scanner
        sc.close();

    }

}
