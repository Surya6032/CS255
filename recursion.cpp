#include <iostream>

using namespace std;

void response()
{  static int n=0;
   cout<<n++<<" Welcome to recursion!"<<endl;
   
   response();
   
}   
int main()
{
    response();
    return 0;



}

    
  
