#include <iostream>
#include <random>
#include "Queue.h"
#include <unistd.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int tick=0,arrival=0;
    double  number=0;
    Queue q(5);
     //Customer customers[5] ;
    //srand(time(0));

    while(tick<=60)
        {
         arrival=rand()%2;
         cout<<"Minute:"<<tick<<endl;
         default_random_engine generator(time(0));
         normal_distribution<double> customers(1.0,1.0);
          for(int i=0; i<5 ;i++)
            {
              int(number) = customers(generator);
              if(!q.full())
                if(number>0)
                  q.eneque(int(number));
              sleep(1);
              if(
            } 
         q.dump();
         cout<<endl;



         tick++;


      }


}
