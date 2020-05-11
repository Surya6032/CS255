#include <iostream>
#include "bst.h"

using namespace std;
int main()
{
    BinarySearchTree tree;
   
    tree.insert(34);
    tree.insert(22);
    tree.insert(57);
    tree.insert(41);
    tree.deleteNode(34);
    cout<< "In Order:";
    tree.printInOrder();
    cout<<endl<<"Pre Order:";
    tree.printpreOrder();
    cout<<endl<<"Post Order:";
    tree.printpostOrder();
    cout<<endl;
    if(tree.search(57))
       cout<<"57 was found"<<endl;
    else
        cout<<"57 not found"<<endl;
    if(tree.search(47))
       cout<<"47 found"<<endl;
    else
        cout<<"47 was not found"<<endl;

    return 0;
}
