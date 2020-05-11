struct treeNode;         //forward declaration

typedef treeNode* treeNode;    //creating a new type: treeNodePtr

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
      public:
          BinarySearchTree();
          bool isEmpty() const;
          void  insert (int inData);
};
