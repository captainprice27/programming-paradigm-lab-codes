// 2021CSB071 PRAYAS MAZUMDER
//  question 1 of assignment 4

/*
Complete the classes below with suitable data members and methods. In client program take
instance of these classes and demonstrate various functionality of these objects.

Class Vehicle {
private :
// Price
// Manufacturer
public :
// Default constructor
// Parametrized constructor
// Copy constructor
// Assignment operator
// Read data
// Display data
};

Class Car : public Vehicle {
private :
// Color
// NumberOfSeats
// Model
public :
// Default constructor
// Parametrized constructor
// Copy constructor
// Assignment operator
// Read data
// Display data
};
*/

#include <iostream>
using namespace std;
#include <string.h>

const int DEFAULT_STRING_SIZE = 10;

class Vehicle
{
private:
    float price;
    char *manufacturer;

public:
    Vehicle() : price(0), manufacturer(NULL) {} // default constructor
    Vehicle(const float p, const char *man);    // parameterized constructor
    Vehicle(const Vehicle &obj);                // copy cons.
    Vehicle &operator=(const Vehicle &rhs);
    void read_data();
    void display_data() const;
    ~Vehicle(); // destructor
};

Vehicle::Vehicle(const float p, const char *man) : price(p)
{
    manufacturer = new char[strlen(man) + 1]; //+1 for \n
    strcpy(manufacturer, man);
}

Vehicle::Vehicle(const Vehicle &obj) : price(obj.price)
{
    manufacturer = new char[strlen(obj.manufacturer) + 1]; //+1 for \n
    strcpy(manufacturer, obj.manufacturer);
}

Vehicle &Vehicle::operator=(const Vehicle &rhs)
{
    if (this == &rhs)
        return *this;

    delete[] manufacturer;

    price = rhs.price;

    manufacturer = new char[strlen(rhs.manufacturer) + 1]; //+1 for \n
    strcpy(manufacturer, rhs.manufacturer);

    return *this;
}

void Vehicle::read_data()
{
    if (manufacturer != NULL)
        delete[] manufacturer;

    manufacturer = new char[DEFAULT_STRING_SIZE + 1]; //+1 for \n

    cout << "Enter Price of Vehicle: ";
    cin >> price;

    cout << "Enter Manufacturer of Vehicle: ";
    cin >> manufacturer;
}

void Vehicle::display_data() const
{
    cout << "Price of Vehicle: " << price << endl;

    if (manufacturer != NULL)
        cout << "Manufacturer of Vehicle: " << manufacturer << endl;
    else
        cout << "Manufacturer of Vehicle: NULL" << endl;
}

Vehicle::~Vehicle()
{
    if (manufacturer != NULL)
        delete[] manufacturer;
}

class Car : public Vehicle
{
    char *color;
    unsigned short no_of_seats;
    char *model;

public:
    Car() : color(NULL), no_of_seats(0), model(NULL) {}
    Car(const float p, const char *man, const char *col, unsigned const short seats, const char *mod);
    Car(const Car &);
    Car &operator=(const Car &rhs);
    void read_data();
    void display_data() const;
    ~Car();
};

Car::Car(const float p, const char *man, const char *col, unsigned const short seats, const char *mod) : Vehicle(p, man), no_of_seats(seats)
{
    color = new char[strlen(col) + 1]; //+1 for \n
    strcpy(color, col);

    model = new char[strlen(mod) + 1]; //+1 for \n
    strcpy(model, mod);
}

Car::Car(const Car &obj) : no_of_seats(obj.no_of_seats), Vehicle(obj)
{
    color = new char[strlen(obj.color) + 1]; //+1 for \n
    strcpy(color, obj.color);

    model = new char[strlen(obj.model) + 1]; //+1 for \n
    strcpy(model, obj.model);
}

Car &Car::operator=(const Car &rhs)
{
    if (this == &rhs)
        return *this;

    (Vehicle &)(*this) = rhs; // using base class operator overload

    delete[] color;
    delete[] model;
    color = new char[strlen(rhs.color) + 1]; //+1 for \n
    strcpy(color, rhs.color);

    no_of_seats = rhs.no_of_seats;

    model = new char[strlen(rhs.model) + 1]; //+1 for \n
    strcpy(model, rhs.model);

    return *this;
}

void Car::read_data()
{
    Vehicle::read_data();

    if (color != NULL)
        delete[] color;

    if (model != NULL)
        delete[] model;

    color = new char[DEFAULT_STRING_SIZE + 1]; //+1 for \n
    model = new char[DEFAULT_STRING_SIZE + 1]; //+1 for \n

    cout << "Enter Color: ";
    cin >> color;

    cout << "Enter No. of Seats: ";
    cin >> no_of_seats;

    cout << "Enter Model: ";
    cin >> model;
}

void Car::display_data() const
{
    Vehicle::display_data();

    cout << "Color: " << color << endl;
    cout << "No. of seats: " << no_of_seats << endl;
    cout << "Model: " << model << endl;
}

Car::~Car()
{
    delete[] color;
    delete[] model;
}

int main()
{
    cout << endl;
    Car c1;         // object creation
    c1.read_data(); // reading data ...
    cout << endl;
    c1.display_data(); // displaying data ...
    cout << endl;

    // Car c5;         // object creation
    // c5.read_data(); // reading data ...
    // cout << endl;
    // c5.display_data(); // displaying data ...
    // cout << endl;

    Car *c2 = new Car(20000, "Ford", "Black + Red", 2, "MUSTANG RaptoR"); // alloting data hardcoding way ...
    c2->display_data();
    cout << endl;

    Car c3 = c1;
    c3.display_data();
    cout << endl;

    Car c4;
    c4 = *c2;
    delete c2; // testing Shallow Copy
    c4.display_data();
    cout << endl;

    return 0;
}