#include <string>
using namespace std;
class stringNode;                  //forward declaration

typedef stringNode* stringNodePtr;    //created new type called intNodePtr

class stringNode
{
      private:
         string data;
         stringNodePtr link;
      public:
         stringNode (string inData, stringNodePtr inlink)
                {
                  data=inData;
                  link=inlink;
                }
         string getData() const {return data;}
         void setData(string inData){data=inData;}
         stringNodePtr getLink() const{return link;}
         void setLink(stringNodePtr inlink){link=inlink;}
};
class Queue
{
      private:
           stringNodePtr front;
           stringNodePtr rear;
      public:
           Queue();
           
           void enqueue(string data);
           string dequeue();
           bool empty() const;
           bool full() const;  
           void display() const;     
         
};
