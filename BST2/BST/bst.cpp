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
