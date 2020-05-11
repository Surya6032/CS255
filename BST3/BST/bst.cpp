#include <iostream>
#include "bst.h"
using namespace std;

BinarySearchTree::BinarySearchTree()
{
   root=NULL;
     
}

bool BinarySearchTree::isEmpty() const
{
  if(root==NULL)
     return true;
  else
     return false;
}
void BinarySearchTree::preOrder(treeNodePtr ptr) const
{
     if(ptr != NULL)
       {  
          cout<< " " << ptr->data <<" ";
          if (ptr->left != NULL)
             preOrder(ptr->left);
          
          if (ptr->right != NULL)
             preOrder(ptr->right);
       }




}
void BinarySearchTree::printpreOrder() const
{

     preOrder(root);


}

void BinarySearchTree::postOrder(treeNodePtr ptr) const
{
     if(ptr != NULL)
       {  
          
          if (ptr->left != NULL)
             preOrder(ptr->left);
          
          if (ptr->right != NULL)
             preOrder(ptr->right);
          cout<< " " << ptr->data <<" ";
       }




}
void BinarySearchTree::printpostOrder() const
{

     postOrder(root);


}
bool BinarySearchTree::search (int searchItem) const
{
     treeNodePtr current;
     bool found = false;
     if( root==NULL)
         cout<<" Cannot search an empty tree."<<endl;
     else
         {

             current = root;
             while(current!=NULL && !found)
               {
                   if(current->data == searchItem)
                       found = true;
                   else if(current->data > searchItem)
                        current = current->left;
                   else
                       current = current->right;


               }
       }

return found;







}


void BinarySearchTree::insert(int inData)
{
     treeNodePtr temp = new treeNode;
     temp->left  = NULL;
     temp->right = NULL; 
     temp->data  = inData;
     
     if(isEmpty())                    // is this an empty tree
        root = temp;
     else
       { 
            treeNodePtr parent=NULL, curr=root;                             // Tree is not empty - insert as a leaf node
            while (curr != NULL)
                {
                  parent = curr;
                  if (temp->data > curr->data)
                     curr  = curr->right;
                  else
                      curr = curr->left;


                }

            if(temp->data > parent->data)
              parent->right = temp;
            else
              parent->left  = temp;
       }




}

void BinarySearchTree::inOrder(treeNodePtr ptr) const
{
     if(ptr != NULL)
       {
          if (ptr->left != NULL)
             inOrder(ptr->left);
          cout<< " " << ptr->data <<" ";
          if (ptr->right != NULL)
             inOrder(ptr->right);
       }




}
void BinarySearchTree::printInOrder() const
{

     inOrder(root);


}
void BinarySearchTree::deleteNode (const int deleteItem)
{
    treeNodePtr current; //pointer to traverse the tree
    treeNodePtr trailCurrent; //pointer behind current
    bool found = false;

    if (root == NULL)
        cout << "Cannot delete from an empty tree." 
             << endl;
    else
    {
        current = root;
        trailCurrent = root;

        while (current != NULL && !found)
        {
            if (current->data == deleteItem)
                found = true;
            else
            {
                trailCurrent = current;

                if (current->data > deleteItem)
                    current = current->left;
                else
                    current = current->right;
            }
        }//end while

        if (current == NULL)
            cout << "The item to be deleted is not in the tree." 
                 << endl;
        else if (found)
        {
            if (current == root)
                deleteFromTree(root);
            else if (trailCurrent->data > deleteItem)
                deleteFromTree(trailCurrent->left);
            else
                deleteFromTree(trailCurrent->right);
        }
        else
            cout << "The item to be deleted is not in the tree."
                 << endl;
    }
} //end deleteNode




void BinarySearchTree::deleteFromTree (treeNodePtr &p)
{
    treeNodePtr  current; //pointer to traverse the tree
    treeNodePtr  trailCurrent;  //pointer behind current
    treeNodePtr  temp;      //pointer to delete the node

    if (p == NULL)
        cout << "Error: The node to be deleted does not exist."
             << endl;
    else if (p->left == NULL && p->right == NULL)        //deleting a leaf node
    {
        temp = p;
        p = NULL;
        delete temp;
    }
    else if (p->left == NULL)                          //No left subtree
    {
        temp = p;
        p = temp->right;
        delete temp;
    }
    else if (p->right == NULL)                         //No right subtree
    {
        temp = p;
        p = temp->left;
        delete temp;
    }
    else                                               //Has left and right subtree
    {
        current = p->left;
        trailCurrent = NULL;

        while (current->right != NULL)
        {
            trailCurrent = current;
            current = current->right;
        }//end while

        p->data = current->data;

        if (trailCurrent == NULL) //current did not move; 
                               //current == p->left; adjust p
            p->left = current->left;
        else
            trailCurrent->right = current->left;
 
        delete current;
    }//end else
} //end deleteFromTree


