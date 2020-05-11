#include <iostream>

using namespace std;
void fun()
{
 int a=0;
 static int b=0;
 a++;
 b++;
 cout<<"a is:"<<a<<" b is:"<<b<<endl;


}

int main()
{
 
  fun();
  fun();
  fun();

  return 0;
}
