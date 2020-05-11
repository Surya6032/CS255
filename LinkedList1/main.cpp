#include <iostream>
#include "IntNode.h"

using namespace std;

int main() 
{
    
    IntNodePtr head=NULL;
    deleteNode(head,8);
	head = new IntNode();
    
    head->setData(25); //(*head).setData(25); 
    head->setLink(NULL);
    headInsert(head,45);
    //IntNodePtr head2 = new IntNode(47, nullptr);
    headInsert(head, 39);
    headInsert(head, 87);    
    display(head);
    tailInsert(head,14);
    tailInsert(head,15);
    display(head);
    deleteNode(head,14);
    display(head);
    deleteNode(head,7);
    display(head);

    return 0;
}
