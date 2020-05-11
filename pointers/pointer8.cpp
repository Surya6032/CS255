//Program to demonstrate that an array variable is a kind of pointer variable.
#include <iostream>
using namespace std;

typedef int* IntPtr;

int main( )
{ 
    IntPtr p;
    int a[10];
    int index;

    for (index = 0; index < 10; index++)
        a[index] = index; //fill the array 0 through 9

    p = a;

    for (index = 0; index < 10; index++)
        cout << p[index] << " ";//print the array
    cout << endl;

    for (index = 0; index < 10; index++)
        p[index] = p[index] + 1;//print the array + 1

    for (index = 0; index < 10; index++)
        cout << a[index] << " ";
    cout << endl;

    return 0;
}
