//Program to demonstrate pointers and dynamic variables.
#include <iostream>
using namespace std;

int main( )
{
    int *p1, *p2;

    p1 = new int;  //grabes from memory dynamically 
    *p1 = 42;
    p2 = p1;        //change the value of P1
    cout << "*p1 == " << *p1 << endl;  //P1 value is 42
    cout << "*p2 == " << *p2 << endl;  //P2 value is 42

    *p2 = 53;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    p1 = new int;
    *p1 = 88;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    cout << "Hope you got the point of this example!\n";
    return 0;
}
