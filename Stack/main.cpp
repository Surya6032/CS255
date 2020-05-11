#include <iostream>
#include "stack.h"

using namespace std;

int main() 
{
    Stack s;
    s.push(35);
    s.push(82);
    /*if (s.empty())
       cout<<"Empty Stack";
    else*/
       cout<<s.pop()<<endl;
	return 0;
}
 
