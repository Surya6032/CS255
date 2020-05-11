class IntNode;

typedef IntNode* IntNodePtr;

class IntNode
{
     private:
        int data;
        IntNodePtr link;
     public:
        IntNode();
        IntNode(int theData,IntNodePtr theLink);
        void setData(int theData);
        void setLink(IntNodePtr theLink);
        int  getData() const;
        IntNodePtr getLink() const;
       
       
        
        
};

void headInsert (IntNodePtr &head, int theData); 
void display(IntNodePtr head);  
void insert (IntNodePtr afterMe, int theData);
void tailInsert (IntNodePtr &head, int theData);
void deleteNode (IntNodePtr &head, int target); 
