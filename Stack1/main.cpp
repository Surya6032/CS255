#include <iostream>
#include "stack.h"

using namespace std;

int main() 
{
    Stack s;
    s.push(23);
    s.push(35);
    cout<<"Top:"<<s.showTop() <<endl;
    if(s.empty())
       cout<<"Empty stack"<<endl;
    else
       cout<<s.pop()<<endl;
    if(s.empty())
       cout<<"Empty stack"<<endl;
    else
       cout<<s.pop()<<endl;
    if(s.empty())
       cout<<"Empty stack"<<endl;
    else
       cout<<s.pop()<<endl;
	return 0;
}
 
