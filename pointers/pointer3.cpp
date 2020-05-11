#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
  int array[] =  {5, 10, 15, 20, 25, 30};

  cout<< "Array: "<<array<<endl;//address of the first element

  cout << "The value of the first element is: " 
       << *array << endl;                        //name array is keeping track of the first element and *array printing the value of first element

  cout << "The value of the second element is: " 
       << *(array+1) << endl;                    

  cout << "The value of the fifth element is: " 
       << *(array+4) << endl;

  cout << "The first element plus one is: " 
       << *array+1 << endl;  //it will add 1 to the first value of the array 

  return 0;
}
