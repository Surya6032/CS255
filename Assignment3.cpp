/*

       CSS 255:Computer Science II
       Spring Semester, 2019

       Assignment 2: This program will read the given details of a quaterback from a file and then calculate the
                     percentage and its rating.


       Programmed by: Surya Partap Singh
       Due: Wednesday, January 23,2019

*/


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX=100;
struct List
{
  string FirstName;
  string LastName;
  int Attempts;
  double Completion,YardsPassing,TouchDowns,Intercptions;

};

void Read(List lis[], int &num);
void Print(List lis);
double Percentage( List lis);
double Ratings( List lis);
void sortByLastName(List lis[],int num);
void sortByRating(List lis[], int num);
void newInfo (List lis[], int &num);
int main()
{
 List lis[MAX];     // List is a struct and its declared as lis
 double percentage=0,ratings=0;
 int num=0;
 Read(lis,num);
 //newInfo(lis,num);
 cout<<"Quaterback"<<setw(17)<<"Att."<<setw(9)<<"Comp."<<setw(13)<<"Pct."<<setw(10)<<"Yards"<<setw(5)<<"TD"<<setw(7)<<"Int."<<setw(8)<<"Rating"<<endl;
 cout<<"----------"<<setw(17)<<"----"<<setw(9)<<"-----"<<setw(13)<<"----"<<setw(10)<<"-----"<<setw(5)<<"--"<<setw(7)<<"----"<<setw(8)<<"------"<<endl;
 for(int i=0;i<num;i++)
 {
  Print(lis[i]);   //Printing all of the data
 }
 cout<<"After Sorting";
 cout<<"Quaterback"<<setw(17)<<"Att."<<setw(9)<<"Comp."<<setw(13)<<"Pct."<<setw(10)<<"Yards"<<setw(5)<<"TD"<<setw(7)<<"Int."<<setw(8)<<"Rating"<<endl;
 cout<<"----------"<<setw(17)<<"----"<<setw(9)<<"-----"<<setw(13)<<"----"<<setw(10)<<"-----"<<setw(5)<<"--"<<setw(7)<<"----"<<setw(8)<<"------"<<endl;
 /*sortByLastName(lis,num);
 for(int i=0;i<num;i++)
 {
  Print(lis[i]);   //Printing all of the data
 }*/
 cout<<"After Sorting"<<endl;
 cout<<"Quaterback"<<setw(17)<<"Att."<<setw(9)<<"Comp."<<setw(13)<<"Pct."<<setw(10)<<"Yards"<<setw(5)<<"TD"<<setw(7)<<"Int."<<setw(8)<<"Rating"<<endl;
 cout<<"----------"<<setw(17)<<"----"<<setw(9)<<"-----"<<setw(13)<<"----"<<setw(10)<<"-----"<<setw(5)<<"--"<<setw(7)<<"----"<<setw(8)<<"------"<<endl;
 sortByRating(lis,num);
 for(int i=0;i<num;i++)
 {
  Print(lis[i]);   //Printing all of the data
 }



}
//*********************************************************
//Function: Read
//Purpose:  Read data from an input file into an array
//          of structs
//Incoming: List lis[], int &num
//Outgoing: nothing
//return:   nothing
//*********************************************************
void Read(List lis[], int &num)
{
 ifstream infile("football-in.txt");
 while(!infile.eof())
 {
   infile >> ws;
   getline(infile, lis[num].FirstName);
   getline(infile, lis[num].LastName);
   infile >> lis[num].Attempts;
   infile >> lis[num].Completion;
   infile >> lis[num].YardsPassing;
   infile >> lis[num].TouchDowns;
   infile >> lis[num].Intercptions;
   num++;

 }
 infile.close();

}
//*********************************************************
//Function: Percentage
//Purpose:  Calculate completion percentage of quaterbacks
//Incoming: List lis
//Outgoing: nothing
//return:   percentage
//*********************************************************
double Percentage(List lis)
{
 double percentage=0;
 if(lis.Attempts==0)
 {
 	return 0;
 }
 else{
 	percentage=(lis.Completion/lis.Attempts)*100;
    return percentage;
 }






}
//*********************************************************
//Function: Ratings
//Purpose:  Calculate ratings of a quaterback
//Incoming: List lis[]
//Outgoing: nothing
//return:   ratings
//*********************************************************
double Ratings(List lis)
{
 double ratings=0;
 if(lis.Attempts==0)
 {
 	return 0;
 }
 else{
 	ratings=(3*lis.Completion+lis.YardsPassing+10*lis.TouchDowns)/(lis.Attempts+8*lis.Intercptions);
    return ratings;
 }





}
void sortByLastName(List lis[],int num)
{
  List temp;
  int minIndex=0;
  for(int i=0;i<num-1;i++)
     {
       minIndex=i;
       for(int j=i+1; j<num;j++)
           {
            if(lis[j].LastName < lis[minIndex].LastName)
               {
                 minIndex=j;

               }


           }
           temp = lis[i];
           lis[i] = lis[minIndex];
           lis[minIndex] = temp;



     }






}
void sortByRating(List lis[], int num)
{
  List temp;
  int minIndex=0;
  for(int i=0;i<num-1;i++)
      {
        minIndex=i;
        for(int j=num-1;j<num;j++)
           {
             if(Ratings(lis[j])<Ratings(lis[minIndex]))
               {
                 minIndex=j;

               }


           }
         temp=lis[i];
         lis[i]=lis[minIndex];
         lis[minIndex]=temp;




      }







}
void newInfo (List lis[], int &num)
{
  cout<<"Quaterback First Name:"<<endl;
  cin >>ws;
  getline(cin, lis[num].FirstName);
  cout<<"Quaterback Last Name:"<<endl;
  getline(cin, lis[num].LastName);
  cout<<"Attempts:"<<endl;
  cin>>lis[num].Attempts;
  cout<<"Completions:"<<endl;
  cin>>lis[num].Completion;
  cout<<"Yards Passing:"<<endl;
  cin>>lis[num].YardsPassing;
  cout<<"TouchDowns:"<<endl;
  cin>>lis[num].TouchDowns;
  cout<<"Interceptions:"<<endl;
  cin>>lis[num].Intercptions;
  num++;




}


//*********************************************************
//Function: Print
//Purpose:  Print the output
//Incoming: List lis
//Outgoing: nothing
//return:   nothing
//*********************************************************
void Print(List lis)
{

        cout<<lis.FirstName<<setw(8)<<lis.LastName<<"\t\t"<<left<<setw(4)<<lis.Attempts<<"\t"
	    <<setw(13) << setprecision(0)<<fixed<<lis.Completion
        <<setw(10) <<setprecision(1)<<fixed<<Percentage(lis)<<setw(8)<<setprecision(0)<<fixed<<lis.YardsPassing << setw(5)  << lis.TouchDowns
        <<setw(6) <<lis.Intercptions <<setprecision(2)<<fixed<<Ratings(lis)<<endl;

}


