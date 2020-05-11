#include <iostream>
#include "IntNode.h"
using namespace std;

IntNode::IntNode()
{
    data=0;
    link=NULL;             



}
IntNode::IntNode(int theData,IntNodePtr theLink)
{
    data = theData;
    link = theLink;
}

void IntNode::setData(int theData)
{
    data = theData;
   
}

void IntNode::setLink(IntNodePtr theLink)
{
    link = theLink;
}

int IntNode::getData() const
{
    return data;
   
}
IntNodePtr IntNode::getLink() const
{
    return link;
}

void headInsert (IntNodePtr &head, int theData)
{
     head = new IntNode(theData, head);

}

void display(IntNodePtr head)
{
 IntNodePtr temp = head;
 cout<<"head ";
 while(temp != NULL)
      {
            
            cout <<" -> " << temp->getData() ;
            temp = temp->getLink();



      }
      cout << endl;

}
void insert (IntNodePtr afterMe, int theData)
{
 IntNodePtr temp = NULL;
 temp = new IntNode(theData, afterMe->getLink());
 afterMe->setLink(temp);
//afterMe-> setLink(new IntNode(theData, afterMe->getLink()));
 
}

void tailInsert (IntNodePtr &head, int theData)
{
     IntNodePtr temp, next;
     if (head == NULL)                            //Empty List
        head = new IntNode(theData, head);
     else
         {
             temp = head;
             next = temp->getLink();
             while(next!=NULL)
             {
               temp = next;
               next = next->getLink();
              
             }
               insert (temp,theData);

         }



}

void deleteNode (IntNodePtr &head, int target)
{
    if (head == NULL)                                    //1. Empty List
       cout<< "Cannot delete from Empty List" <<endl;
    else 
    {
      IntNodePtr pred=head, temp =head->getLink();
      if (pred->getData() == target)                    //2. Delete 1st ITEM
      {
       head = temp;
       delete pred;

      }
      else
      {
       while ( (temp->getData() != target) && (temp->getLink()!=NULL))
             {
               // pred = temp;
               // temp = temp->getLink();
               temp = temp->getLink();
               pred = pred->getLink();
             }
             if(temp->getData() == target)
             {
              pred->setLink(temp->getLink());
              delete temp;
              cout << "Item deleted" <<endl;


             }
             else
             {
              cout<< "Item not found"<<endl;
             
             }     

      
      }


    }







}

int count (IntNodePtr head)
{
 IntNodePtr temp = head;
 int num=0;
 while (temp != NULL)
       {
         num++;
         temp = temp->getLink();
      
       }
return num;




}

int recursiveCount (IntNodePtr ptr)
{
 
 if( ptr==NULL)
   {
    return 0;

   }
 else
   {
    return 1+recursiveCount(ptr->getLink());


   }




}

