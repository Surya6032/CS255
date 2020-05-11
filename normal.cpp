#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{

 default_random_engine generator(time(0));
 normal_distribution<double> exams(70,20);
 double score;
 
 
 for(int i=0; i<10 ;i++)
  {
   score = exams(generator);
   cout << score << endl;
  } 
  normal_distribution<double> act(21,3);
  int values;
  cout<<endl;
  cout<<"Act Score"<<endl;
  for(int i=0; i<10 ;i++)
  {
   values = act(generator);
   cout <<values<< endl;
  } 
 


 return 0; 
}
