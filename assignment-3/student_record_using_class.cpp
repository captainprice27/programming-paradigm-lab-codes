#include <iostream>
using namespace std;

const int NAME_SIZE = 20;
const int DEPT_NAME_SIZE = 5;

class student // class - student
{
    // data members
    char name[NAME_SIZE];
    int age;
    char department[DEPT_NAME_SIZE];
    int year_grad;

public: // access specifier
    void readStudentData();
    void printStudentData() const;
}; // <-- this semicolon


void student::readStudentData() // :: is the scope resolution operator , since member function is declared outside the class
{
    cout << "Enter Student's Name: ";
    cin.getline(name, NAME_SIZE);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Department (Abbv.): ";
    // cin.getline(department, DEPT_NAME_SIZE);
    cin >> department;
    cout << "Enter Year of Graduation: ";
    cin >> year_grad;
    cin.ignore(); // ignore newline
}


void student::printStudentData() const
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Department: " << department << endl;
    cout << "Year of Graduation: " << year_grad << endl;
}


int main()
{
    cout << "Enter Number of Record to be added: ";
    int n;
    cin >> n;
    cin.ignore(); // ignore newline
    cout << endl;

    student s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Details of Student -->  " << i + 1 << endl;
        s[i].readStudentData();
        cout << endl;
    }

    cout << "Output: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data of Student -->  " << i + 1 << endl;
        s[i].printStudentData();
        cout << endl;
    }

    return 0;
}