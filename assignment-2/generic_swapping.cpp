#include <iostream>
using namespace std;

template <typename T>   // using template function for generic purpose 

void generic_swap(T &a, T &b)
{
    T c = a; // because c isn't an arguement hence T c is written ....
    a = b;
    b = c; // swapping done here ...
}

struct complex // useful for struct datatype only
{
    int num;
    int com;
};

void print_data(complex z) // useful for struct datatype only
{
    cout << "first part  " << z.num << endl;
    // cout << endl ;
    cout << "complex part " << z.com << endl;
    // cout << endl ;
}

int main()
{
    //      // CASE --> 1 : int data type

    //     cout << "Testing for int" << endl;
    //     int a ,b ;
    //     cout << " enter the values in  'int' to be swapped :" << endl ;
    //     cin >> a >> b ;
    //     cout << "Original Values -->  " << a << " , " << b << endl << endl;
    //     generic_swap(a, b);  // function call
    //     cout << "Swapped Values -->  " << a << " , " << b << endl
    //          << endl;

    // // CASE --> 2 : short data type

    //     cout << "Testing for short" << endl;
    //     short c ,d ;
    //     cout << " enter the values in  'short' to be swapped :" << endl ;
    //     cin >> c >> d ;
    //     cout << "Original Values -->  " << c << " , " << d << endl << endl;
    //     generic_swap(c, d);  // function call
    //     cout << "Swapped Values -->  " << c << " , " << d << endl
    //          << endl;

    // // CASE --> 3 : float data type

    //     cout << "Testing for float" << endl;
    //     float e ,f ;
    //     cout << " enter the values of 'float' to be swapped :" << endl ;
    //     cin >> e >> f ;
    //     cout << "Original Values -->  " << e << " , " << f << endl << endl;
    //     generic_swap(e, f);  // function call
    //     cout << "Swapped Values -->  " << e << " , " << f << endl
    //          << endl;

    //     // CASE --> 4 : double data type

    //     cout << "Testing for double" << endl;
    //     double e ,f ;
    //     cout << " enter the values of 'double' to be swapped :" << endl ;
    //     cin >> g >> h ;
    //     cout << "Original Values -->  " << g << " , " << h << endl << endl;
    //     generic_swap(g, h);  // function call
    //     cout << "Swapped Values -->  " << g << " , " << h << endl
    //          << endl;

    // CASE --> STRUCT datatype

    cout << "Testing struct" << endl;
    cout << endl;

    complex z1; // value of first complex number
    z1.num = 2;
    z1.com = 4;

    complex z2; // value of first complex number
    z2.num = 7;
    z2.com = 9;

    cout << "Original Values --> " << endl;
    cout << endl;
    print_data(z1);
    cout << endl;
    print_data(z2);
    cout << endl;

    generic_swap(z1, z2);

    cout << "Swapped Values -->  " << endl;
    cout << endl;
    print_data(z1);
    cout << endl;
    print_data(z2);

    return 0;
}