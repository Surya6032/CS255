#include <iostream>
#include "queue.h"
using namespace std;

int main() 
{
    Queue q;
    q.display();
    q.enqueue("dog");
    q.enqueue("cat");
    q.enqueue("fish");
    

//    cout << q.dequeue()<<endl;
//    cout << q.dequeue()<<endl;
//    cout << q.dequeue()<<endl;
//    cout << q.dequeue()<<endl;
    q.display();
   
	return 0;
}
