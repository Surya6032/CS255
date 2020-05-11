#include <iostream>
#include <ctime>
using namespace std;

double fib(int num);
int main()
{
    int n=0, start=0, end=0, difference=0;
    do
    {
    cout << "Enter n for the nth fibonacci number(-1 to quit):";
    cin>>n;
    if(n != -1)
      {  
        start = time(0);
        cout<<"The " << n << "th fibonacci number is:"<<fib(n)<<endl;
        end = time(0);
        difference=end-start;
        cout<< "It took: "<<difference<< " seconds to compute" <<endl;
      }
    }while(n != -1);
    return 0;
}
double fib(int num)
{
  double old, prev , curr;
  if (num==1)
     curr=1;
  else 
     if(num==2)
        curr=1;
     else
       {
         old=1;
         prev=1;
         for(int i=0;i<num-2;i++)
         {
            curr=old + prev;
            old = prev;
            prev=curr;
         }
       }
  return curr;

}
