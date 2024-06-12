// 2021csb071 -> prayas mazumder
// assignment 4 , question 3

/*A plot is broken into different geometric shapes like Triangle, Rectangle and Circle of
different size of arbitrary number. Provide a mechanism to sum up total area covered by these
shapes */

#include <iostream>
using namespace std;

class Shape
{
public:
    // int width, height;

public:
    // Shape(int a = 0, int b = 0)
    // {
    //     width = a;
    //     height = b;
    // }

    // virtual int area()
    // {
    //     cout << "Parent class area :" << width * height << endl;
    //     return width * height;
    // }

    virtual void read();
    virtual double area();
};
class Rectangle : public Shape
{
public:
    float length, breadth;

public:
    // Rectangle(int a = 0, int b = 0) : Shape(a, b) {}
    Rectangle(int a = 0, int b = 0)
    {
        length = a;
        breadth = b;
    }
    double area()
    {
        cout << "Rectangle class area :" << length * breadth << endl;
        return (length * breadth);
    }

    void read()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }
};

class Triangle : public Shape
{   
    float base , height ;

public:
    // Triangle(int a = 0, int b = 0) : Shape(a, b) {}
    Triangle(int a = 0, int b = 0)
    {
        base = a;
        height = b;
    }

    double area()
    {
        cout << "Triangle class area :" << ((base * height) / 2) << endl;
        return ((base * height) / 2);
    }

    void read()
    {
        cout << "Enter Base: ";
        cin >> base;
        cout << "Enter Height: ";
        cin >> height;
    }
};

// Main function for the program
int main()
{
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // store the address of Rectangle
    shape = &rec;

    // call rectangle area.
    float rec_area = shape->area();

    // store the address of Triangle
    shape = &tri;

    // call triangle area.
    float tri_area = shape->area();

    return (tri_area + rec_area);
}