struct treeNode;         //forward declaration

typedef treeNode* treeNodePtr;    //creating a new type: treeNodePtr

struct treeNode
{
    treeNodePtr left;
    treeNodePtr right;
    int         data;
   

};

class BinarySearchTree
{
      private:
          treeNodePtr root;
          void inOrder(treeNodePtr) const;
          void preOrder(treeNodePtr ptr) const;
          void postOrder(treeNodePtr ptr) const;
      public:
          BinarySearchTree();
          bool isEmpty() const;
          void  insert (int inData);
          void printInOrder() const;
          void printpreOrder() const;
          void printpostOrder() const;
          bool search (int searchItem) const;
          void deleteNode (const int deleteItem);
          void deleteFromTree(treeNodePtr &p);
};
