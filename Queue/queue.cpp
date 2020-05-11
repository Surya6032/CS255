#include <iostream>
#include "queue.h"
using namespace std;

Queue::Queue()
{
     front=NULL;
     rear =NULL;

}
bool Queue::empty() const
{
  if(front==NULL)
     return true;
  else
     return false;



}
bool Queue::full() const
{
   return false;

}
void Queue::enqueue(string data)
{
  if(full())
     cout<< "Cannot add to queue- it is full"<<endl;
  else
    {
     stringNodePtr temp=new stringNode(data, NULL);
     if(empty())
        front=temp;
     else
        {  
           rear->setLink(temp);   //rear points to the new node  
        }
     rear=temp;
 
    }
}
string Queue:: dequeue()
{
  string item="";
  if(empty())
     cout<< "Cannot remove from an empty queue";
  else
    {
    
     stringNodePtr temp=front;
     item = temp->getData();
     front = front->getLink();
     delete temp;
    
     
     }
  return item;

}
void Queue::display() const
{
  if(empty())
    cout<<"Queue is empty"<<endl;
  else
    {
      stringNodePtr temp=front;
      cout<<"FRONT";
      while(temp!=NULL)
        {
          cout<<" <- "<<temp->getData();
          temp = temp->getLink();
        }
      cout<< " <-REAR"<<endl;
    }

}
