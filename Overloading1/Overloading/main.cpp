#include <iostream>
#include "Feetinches.h"
using namespace std;



int main()
{   
    FeetInches first(6,3) , second(5,15),third;
    first.print();
    second.print();
    if(first == second)
      cout<<"They are equal"<<endl;
    else
      cout<<"They are not equal"<<endl;
    third=first+second;
    third.print();
	return 0;

}
