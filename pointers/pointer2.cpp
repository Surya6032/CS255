#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
  int a = 10, b = 30, c = 20;
  int *ptr;

  cout << "The values of a, b, and c are: "
       << a << " " << b << " " << c << endl;

  ptr = &a; //address of a ptr=address of a
  *ptr += 50; //talking about a and adding 50 to it i.e. 60

  ptr = &b; 
  *ptr -= 50;//b=-20

  ptr = &c;
  *ptr *= 50;//c=1000

  cout << "The values of a, b, and c are: "
       << a << " " << b << " " << c << endl;

  return 0;
}
