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
    float width, height;

public:
    Shape(float a = 0, float b = 0)
    {
        width = a;
        height = b;
    }
    virtual double area()
    {
        cout << "Base class area :" << width * height << endl;
        return width * height;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(float a = 0, float b = 0) : Shape(a, b) {}

    double area()
    {
        cout << "Rectangle class area :" << width * height << endl;
        double f = (width * height);
        // return (width * height);
        return f;
    }
};

class Triangle : public Shape
{
public:
    Triangle(float a = 0, float b = 0) : Shape(a, b) {}

    double area()
    {
        cout << "Triangle class area :" << (width * height) / 2 << endl;
        return (width * height / 2);
    }
};

const double pi = 3.14159;

class Circle : public Shape
{
public:
    Circle(float a = 0) : Shape(a, a) {}

    double area()
    {
        cout << "Circle class area :" << ((width * height) * pi) << endl;
        return ((width * height) * pi);
    }
};

// Main function for the program
int main()
{
    Shape *shape;

    cout << endl;

    float a, b;
    cout << " enter the rectangle dimensions (length , breadth) -->" << endl;
    cin >> a >> b;
    Rectangle rec(a, b);

    float c, d;
    cout << " enter the triangle dimensions (base & height) -->" << endl;
    cin >> c >> d;
    Triangle tri(c, d);

    float r;
    cout << " enter the circle radius -->" << endl;
    cin >> r;
    Circle circ(r);

    // store the address of Rectangle
    shape = &rec;
    // call rectangle area.
    double rec_area = shape->area();

    // store the address of Triangle
    shape = &tri;
    // call triangle area.
    double tri_area = shape->area();

    // store the address of the Circle
    shape = &circ;
    // call circle area
    double circ_area = shape->area();

    double sum_of_area = (circ_area + rec_area + tri_area);
    cout << "the sum of the areas are --> " << sum_of_area << endl
         << endl;

    return 0;
}