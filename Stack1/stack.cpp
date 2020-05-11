#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{

  top = NULL;

}

Stack::~Stack()
{
      initializeStack();
}
bool Stack::empty()const
{
     if (top == NULL)
        return true;
     else
        return false;


}
bool Stack:: full() const
{

     return false;


}
void Stack::initializeStack()
{
     intNodePtr tempLink = top, ptr=NULL;
     while (tempLink != NULL)
        {
           ptr = tempLink;
           tempLink = tempLink ->getLink();
           delete ptr;
        }
     top = NULL;
}
void Stack::push(int inData)
{
     
   intNodePtr temp = new intNode(inData, top);
   top=temp;
}

int Stack::showTop() const
{
    int value=0;
    if (top == NULL)
       cout<<"Cannot show value of top - stack is empty" << endl;
    else
       value = top ->getData();
    
 return value;



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
