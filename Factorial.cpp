#include <iostream>
using namespace std;

double factorial(int num);
int main()
{
    int number=0;
    cout<<"Enter N for N! ?";
    cin>>number;

    cout<<factorial(number) <<endl;

    return 0;
}

int factorial(int num)
{
    if(num == 0)
      return 1;                     //1. stopping Case
    else
      return num*factorial(num-1);  //2. recursive case
}
