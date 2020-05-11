class intNode;                  //forward declaration
typedef intNode* intNodePtr;    //created new type called intNodePtr

class intNode
{
      private:
         int data;
         intNodePtr link;
      public:
         intNode (int inData, intNodePtr inlink)
                {
                  data=inData;
                  link=inlink;
                }
         int getData() const {return data;}
         void setData(int inData){data=inData;}
         intNodePtr getLink() const{return link;}
         void setLink(intNodePtr inlink){link=inlink;}
};

class Stack
{
      private:
            intNodePtr top;
      public:
            Stack();
            ~Stack();
            void initializeStack();
            void push (int data);
            int pop   ();
            int showTop() const;
            bool empty()const;
            bool full() const;
};          
