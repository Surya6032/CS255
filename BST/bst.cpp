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
