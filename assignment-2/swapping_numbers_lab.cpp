#include <iostream>
using namespace std;

struct swap
{
    int n;
    int m;
};

int main()
{

    // int a, b, temp;  // declaring the values of a,b,temp
    // float a, b, temp;  // declaring the values of a,b,temp
    // short a, b, temp;  // declaring the values of a,b,temp
    // struct a, b, temp;  // declaring the values of a,b,temp
    // struct swap s1 ;
    // struct swap s2 ;
    // struct swap stemp ;
    cout << " enter the value of 'a'" << endl;
    cin >> a;
    cout << " enter the value of 'b'" << endl;
    cin >> b;

    cout << "before swapping ,the values are" << endl;
    cout << "the value of a " << a << "  the value of b is " << b << endl;

    temp = a;
    a = b;
    b = temp;

    // struct swap stemp = struct swap s1 ;
    // struct swap s1 = struct swap s2 ;
    // struct swap s2 = struct swap stemp ;

    cout << " after the swapping the values are  " << endl;
    cout << " the value of 'a' is " << a << endl;
    cout << " the value of 'b' is " << b << endl;

    // cout << "after swapping the value of s1 is" << struct swap s1 << endl ;
    // cout << "after swapping the value of s2 is" << struct swap s2 << endl ;
}
