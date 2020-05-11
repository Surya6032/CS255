#include <iostream>
#include "Feetinches.h"
using namespace std;



int main()
{   
    FeetInches first , second,third;
    cin>>first;
    cin>>second;
   // first.print();
    //second.print();
    cout<< first <<" and " <<second<<endl; 
    if(first == second)
      cout<<"They are equal"<<endl;
    else
      cout<<"They are not equal"<<endl;
    third=first+second;
    cout<<third;
	return 0;

}
