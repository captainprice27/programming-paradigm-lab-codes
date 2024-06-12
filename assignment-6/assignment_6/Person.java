package assignment_6;

//import java.util.Scanner;

public class Person 
{
    // data members
    private String name;
    private int age;
    private String gender;
    private String department;

    // constructor
    public Person(String name, int age, String gender, String department) 
    {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.department = department;
    }

    // getter functions
    
    public String getName()
    {
        return name;
    }

    public int getAge() 
    {
        return age;
    }

    public String getGender() 
    {
        return gender;
    }

    public String getDepartment() 
    {
        return department;
    }


    /*// member functions

    public void readData_student() // reads data of the student from the user input
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name: ");
        this.name = sc.nextLine();

        System.out.print("Enter age: ");
        this.age = sc.nextInt();

        System.out.print("Enter gender: ");
        this.gender = sc.nextLine();

        sc.nextLine(); // consume newline character

        System.out.print("Enter department: ");
        this.department = sc.nextLine();

        System.out.print("Enter the roll number: ");
        this.roll = sc.nextLine();

        System.out.print("Enter year: ");
        this.year = sc.nextInt();

        sc.close(); // closing the scanner ...
    }

    public void printData_student()  // prints the data provided by user input
    {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Gender: " + this.gender);
        System.out.println("Department: " + this.department);
        System.out.println("Roll: " + this.roll);
        System.out.println("Year: " + this.year);
    }

    public void professor() // reads data of the professor from the user input
    {
        Scanner sc1 = new Scanner(System.in);

        System.out.print("Enter name: ");
        this.name = sc1.nextLine();

        System.out.print("Enter age: ");
        this.age = sc1.nextInt();

        System.out.print("Enter gender: ");
        this.gender = sc1.nextLine();

        sc1.nextLine(); // consume newline character

        System.out.print("Enter department: ");
        this.department = sc1.nextLine();

        System.out.print("Enter course load: ");
        this.courseload = sc1.nextInt();

        System.out.print("Enter salary: ");
        this.salary = sc1.nextInt();

        sc1.close(); // closing the scanner ...
    }

    public void printData_professor()  // prints the data of the professor provided by user input
    {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Gender: " + this.gender);
        System.out.println("Department: " + this.department);
        System.out.println("Course load: " + this.courseload);
        System.out.println("salary: " + this.salary);
    }

 */
}



//public class Student extends Person 
class Student extends Person
{
    // data members
    private int year;

    // constructor
    public Student(String name, int age, String gender, String department, int year) {
        super(name, age, gender, department);
        this.year = year;
    }

    // getter
    public int getYear() {
        return year;
    }
}

//public class Professor extends Person
class Professor extends Person 
{
    // data members
    private int courseLoad;
    private double salary;

    // constructor
    public Professor(String name, int age, String gender, String department, int courseLoad, double salary) {
        super(name, age, gender, department);
        this.courseLoad = courseLoad;
        this.salary = salary;
    }

    // getters
    public int getCourseLoad() {
        return courseLoad;
    }

    public double getSalary() {
        return salary;
    }
}

//public class main
class Main
{
    public static void main(String[] args)
    {
        // create a student object
        Student student = new Student("Prayas Mazumder", 20, "Male", "Computer Science", 2);

        // create a professor object
        Professor professor = new Professor("sipra das bit ", 60, "Female", "Computer Science", 3, 275000.0);

        // display student profile

        System.out.println("Student Profile:");
        System.out.println("Name: " + student.getName());
        System.out.println("Age: " + student.getAge());
        System.out.println("Gender: " + student.getGender());
        System.out.println("Department: " + student.getDepartment());
        System.out.println("Year: " + student.getYear());

        // display professor profile

        System.out.println("\nProfessor Profile:");
        System.out.println("Name: " + professor.getName());
        System.out.println("Age: " + professor.getAge());
        System.out.println("Gender: " + professor.getGender());
        System.out.println("Department: " + professor.getDepartment());
        System.out.println("Course Load: " + professor.getCourseLoad());
        System.out.println("Salary: " + professor.getSalary());
    }
}
