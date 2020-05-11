#include <iostream>
#include "lineType.h"

using namespace std;

int main()
{
    lineType values,values1;
    bool result,parallel,perpendicular;
    cout<<"Values for line one:"<<endl;
    values.setABC();
    cout<<"Values for line two:"<<endl;
    values1.setABC();
    cout<<endl;
    cout<<"Slope of line 1:"<<endl;
    values.Slope();
    cout<<endl;
    cout<<"Slope of line 2:"<<endl;
    values1.Slope();
    cout<<endl;
    result=values.Equal(values1);
    if(result==true)
      cout<<"Lines are equal";
    else
      cout<<"Line are not equal";
    cout<<endl;
    parallel=values.Parallel(values1);
    if(parallel==true)
      cout<<"Lines are parallel"<<endl;
    else
      cout<<"Lines are not parallel"<<endl;
    
    perpendicular=values.Perpendicular(values1);
    if(perpendicular==true)
      cout<<"Lines are perpendicular"<<endl;
    else
      cout<<"Lines are not perpendicular"<<endl;
      
    values.Intersection(values1);
    
    
    return 0;
}
