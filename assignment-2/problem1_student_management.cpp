#include <iostream>
#include <fstream>
using namespace std;

const int NAME_SIZE = 30;   // global const value of max size of name is 30 char..
const int DEPT_SIZE = 5;  // max dept name string size is 5 ...

struct student
{
    char name[NAME_SIZE];
    int age;
    char department[DEPT_SIZE];
    int year_grad;
};

void readStudentData(struct student &s) // read students data
{
    cout << "Enter Student's Name: ";
    cin.getline(s.name, NAME_SIZE);
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Department (Abbv.): ";
    cin >> s.department;
    cout << "Enter Year of Graduation: ";
    cin >> s.year_grad;
    cin.ignore(); // clears the cache/buffer of the prev. input
}

void printStudentData(struct ```````````````````````````student &s) // prints the input data
{
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Year of Graduation: " << s.year_grad << endl;
}

int main()
{
    cout << "Enter Number of Student's Record to be added: ";
    int n;
    cin >> n;
    cin.ignore();
    cout << endl;

    student s[n];

    for (int i = 0; i < n; i++) // entering students details
    {
        cout << '\n'
             << endl;
        cout << "Enter Detail of Student " << i + 1 << ":" << endl;
        readStudentData(s[i]);
        cout << endl;
    }

    cout << "Output: " << endl
         << endl;

    for (int i = 0; i < n; i++) // printing the outputs of student data
    {
        cout << "Data of Student " << i + 1 << ":" << endl;
        printStudentData(s[i]);
        cout << endl;
    }

    return 0;
}