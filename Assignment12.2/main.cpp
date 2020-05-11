#include <iostream>
#include "Queue.h"
#include <unistd.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int tick=0,arrival=0;
    double time=0;
    Queue q(5);
     //Customer customers[5] ;
    //srand(time(0));

    while(tick<=60)
        {
         arrival=rand()%2;
         cout<<"Minute:"<<tick<<endl;
         if(arrival!=0)
           q.eneque(arrival);
         q.dump();
         cout<<endl;



         tick++;


      }


}
