/*

       CSS 255:Computer Science II
       Spring Semester, 2019

       Assignment 3: This program will read the given details of a quaterback from a file and then calculate the
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
void writeToFile(List lis[],int num);
int DisplayMenu();
void Headings();
int main()
{
 List lis[MAX];     // List is a struct and its declared as lis
 
 int num=0,choice=0;
 Read(lis,num);
 choice=DisplayMenu();
 

 while(choice!=9)
  {
      switch (choice)
      {
        case 1:Headings(); 
               for(int i=0;i<num;i++)
                   {
                       Print(lis[i]);   //Printing all of the data
                   }
                break;
        case 2: Headings(); 
                sortByLastName(lis,num);
                for(int i=0;i<num;i++)
                   {
                        Print(lis[i]);   //Printing all of the data
                   }
   
                break;
        case 3:Headings();  
               sortByRating(lis,num);
                 for(int i=0;i<num;i++)
                    {
                        Print(lis[i]);   //Printing all of the data
                    }
                break;
        case 4: newInfo(lis,num);
                cout<<"Player is added!"<<endl;
                writeToFile(lis,num);
                break;
        default: cout << "You have entered invalid choice" << endl;

      }
choice=DisplayMenu();


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
 ifstream infile;
 infile.open("football-in.txt");
 if (infile.fail())
 {
  cout<<"Error opening the file"<<endl;
  exit(1);
 }
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
 num--;
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
//Incoming: List lis
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
//*********************************************************
//Function: DisplayMenu
//Purpose:  Display the menu
//Incoming: nothing
//Outgoing: nothing
//return:   choice
//*********************************************************
int DisplayMenu()
{

 int choice=0;
 cout<<"1:Print QuaterBack Information:"<<endl;
 cout<<"2:Print QuaterBack Information by sorting Last name in ascending order:"<<endl;
 cout<<"3:Print QuaterBack Information by sorting Ratings in descending order:"<<endl;
 cout<<"4:Add a new quterback:"<<endl;
 cout<<"9:Exit!"<<endl;
 cout<<endl;
 cout<<"Enter choice"<<endl;
 cin>>choice;
 return choice;
 }

//*********************************************************
//Function: writeToFile
//Purpose: write new data to file
//Incoming: List lis[],int num
//Outgoing: nothing
//return:   nothing
//********************************************************* 
void writeToFile(List lis[],int num)
{
 ofstream outfile("football-in.txt");
 for(int i=0;i<num;i++)
    {
      outfile<< lis[i].FirstName <<endl << lis[i].LastName
      << endl << lis[i].Attempts << "\t" << lis[i].Completion
      << "\t" << lis[i].YardsPassing << "\t" << lis[i].TouchDowns
      << lis[i].Intercptions <<endl;

    }





}
//********************************************************************
//Function: sortByName
//Purpose: sort the quaterbacks in ascending order by their last names
//Incoming: List lis[],int num    
//Outgoing: nothing
//return:   nothing
//********************************************************************
void sortByLastName(List lis[],int num)
{
   List temp;
   int minIndex=0;
   for (int i=0; i<num-1; i++)
   {
       minIndex=i;
       for(int j=i+1;j<num;j++)
       {
          if (lis[j].LastName < lis[minIndex].LastName)
            { minIndex=j;
            }
       }    
        temp=lis[i];
        lis[i] = lis[minIndex];
        lis[minIndex] = temp;


   }







}

//****************************************************************************
//Function: sortByRating
//Purpose:  Sort the quaterback in descending order according to their ratings
//Incoming: List lis[], int num
//Outgoing: nothing
//return:   nothing
//****************************************************************************
void sortByRating(List lis[], int num)
{
  List temp;
  for(int i=0;i<num;i++)
      {
        for(int j=i+1;j<num;j++)
           {
             if(Ratings(lis[i])<Ratings(lis[j]))
               {
                temp=lis[i];
                lis[i]=lis[j];
                 lis[j]=temp;

               }


           }
         




      }







}

//*********************************************************
//Function: newInfo
//Purpose:  Add new quaterback
//Incoming: List lis[],int num                             
//Outgoing: nothing
//return:   nothing
//*********************************************************
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
//Function: Headings
//Purpose: Print the headings
//Incoming: nothing
//Outgoing: nothing
//return:   nothing
//*********************************************************
void Headings()
{
 
 cout<<"Quaterback"<<setw(17)<<"Att."<<setw(9)<<"Comp."<<setw(13)<<"Pct."<<setw(10)<<"Yards"<<setw(5)<<"TD"<<setw(7)<<"Int."<<setw(8)<<"Rating"<<endl;
 cout<<"----------"<<setw(17)<<"----"<<setw(9)<<"-----"<<setw(13)<<"----"<<setw(10)<<"-----"<<setw(5)<<"--"<<setw(7)<<"----"<<setw(8)<<"------"<<endl;


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


