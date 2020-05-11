#include <iostream>
#include "lineType.h"

using namespace std;

int Menu()
{
 int choice=0;
 cout<<"1:Check slope of both lines"<<endl;
 cout<<"2:Check if lines are equal or not"<<endl;
 cout<<"3:Check if lines are parallel or not"<<endl;
 cout<<"4:Check if lines are perpendicular or not"<<endl;
 cout<<"5:Check intersection points"<<endl;
 cout<<"9:Exit"<<endl;
 cin>>choice;
 return choice;




}

int main()
{
    lineType values,values1;
    bool result,parallel,perpendicular;
    int choice=0;
    cout<<"Values for line one"<<endl;
    values.setABC();
    cout<<"Values for line two"<<endl;
    values1.setABC();
    cout<<endl;
    choice=Menu();
    while(choice!=9)
  {
      switch (choice)
      {
        case 1: cout<<"Slope of line 1:"<<endl;
                values.Slope();
                cout<<endl;
                cout<<"Slope of line 2:"<<endl;
                values1.Slope();
                cout<<endl;
                break;
        case 2: result=values.Equal(values1);
                if(result==true)
                   {cout<<"Lines are equal";}
                else
                    {cout<<"Line are not equal";}
                cout<<endl;
                break;
        case 3: parallel=values.Parallel(values1);
                if(parallel==true)
                  cout<<"Lines are parallel"<<endl;
                else
                  cout<<"Lines are not parallel"<<endl;
                break;
        case 4: perpendicular=values.Perpendicular(values1);
                if(perpendicular==true)
                   cout<<"Lines are perpendicular"<<endl;
                else
                   cout<<"Lines are not perpendicular"<<endl;
                break;
        case 5: values.Intersection(values1);
                break;
        default: cout<<"Invalid choice"<<endl;
      }
choice=Menu();
  }



    return 0;
}
