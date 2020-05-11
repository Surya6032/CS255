#include <iostream>
#include <unistd.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
 int arrivals=0,tick=0,leaving=0;
 //srand(100);
 srand(time(0));
 while(tick < 60)
  {
     
    cout << "Minute: "<< tick <<endl;
    arrivals = rand()%3;
    if(arrivals>0)
        cout<< arrivals << " student(s) entered Raburn hall"<<endl;
    leaving = rand()%3;
    if(leaving>0)
        cout<< leaving << " student(s) leaving Raburn hall"<<endl;
    tick++;
    sleep(1);


  }



 return 0; 
}
