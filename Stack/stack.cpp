#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{

  top = NULL;

}
Stack::~Stack()
{

}
void Stack::push(int inData)
{
     
   intNodePtr temp = new intNode(inData, top);
   top=temp;
}
int Stack::pop()
{
 int value=0;
 if (top == NULL)
    cout<<"Cannot pop from empty stack";
 else
   {
    value = top ->getData();
    intNodePtr tempLink = top;
    top = top->getLink();
    delete tempLink;

   }
 return value;
}
