#include <iostream>
#include "Queue.h"
using namespace std;


bool Queue::full()const
{
 if ((front == 0 && rear == count-1) ||
            (rear == (front-1)%(count-1)))
    {
        return true;
    }
 else
    return false;


}
void Queue::eneque(int value)
{
    if(full())
        cout<<"Queue is full can't add"<<endl;
    else
     {
  //first element inserted
         if( front == -1)
            front = 0;
           //insert element at rear
         rear = (rear+1)%MAX;
         array[rear] = value;
     }
    return ;
}
bool Queue::empty()const
{
 if(front==-1)
    return true;
 else
    return false;


}
int Queue::dequeue()
{

    if(empty())
        cout<<"Queue is empty so cannot delete anything"<<endl;
    int data = array[front];
    array[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == count-1)
        front = 0;
    else
        front++;

    return data;
}
void Queue::dump() const
{
  {
 if(empty())
  cout<<"Queue is empty\n";
 else
 {
  int i;
  if( front <= rear )
  {
   for( i=front ; i<= rear ; i++)
   cout<<array[i]<<" ";
  }
  else
  {
   i=front;
   while( i < MAX)
   {
   cout<<array[i]<<" ";
   i++;
   }
   i=0;
   while( i <= rear)
   {
   cout<<array[i]<<" ";
   i++;
   }
  }
 }
}


}

void Queue::update(Customer ProcessTime) 
{
     if(!empty())
        {
         


        }




}
