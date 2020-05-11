#include <iostream>

using namespace std;

int Ack(int m, int n)
{
  static int count=0;
  count++;
  //cout<< " Count: "<<count <<endl;
  cout<<"Ack("<< m << "," << n <<")"<<endl;
  if(m==0)
    return n+1;
  else if(m>0 && n==0)
    return Ack(m-1,1);
  else if(m>0 && n>0)
    return Ack(m-1,Ack(m,n-1));




}
int main()
{
  cout<<Ack(1,2)<<endl;
  
  return 0;


}
