#include <iostream>

using namespace std;

void message(int times)
{  
   if(times > 0)
     {
      cout<<"Entering function "<<times<<endl;
      cout<<"Recursion is fun!"<<endl;
      message(times-1);
      cout<<"Exiting function "<<times<<endl;
     }
   
}   
int main()
{
    message(5);
    return 0;



}

    
  
