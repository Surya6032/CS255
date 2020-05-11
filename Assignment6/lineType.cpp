#include <iostream>
#include "lineType.h"
using namespace std;

void lineType::Slope()
{
  double slope=0;
  if(b!=0)
    {    
         slope=(-b)/a;
         cout<<slope;
    	 
    	 
	}
	else
	{
		cout<<"Slope can't be found as b is equal to zero"<<endl;
	}

}
bool lineType::Equal(lineType L2)
{
	bool x=false;
	if(a%L2.a==0 && b%L2.b==0 && c%L2.c==0)
	  {
	  	x=true;
	  }
	return x;
	
}
void lineType::setABC()
{
 cin>>a;
 cin>>b;
 cin>>c;


}

bool lineType::Parallel(lineType L2)
{
  bool x=false;
  if((-b/a)==(-L2.b/L2.a))
    {
    	x=true;
	}
  return x;


}
bool lineType::Perpendicular(lineType L2)
{
	bool x=false;
	double slope1=0,slope2=0;
	if(!(a==0 && L2.a==0))
	{
	slope1=(-b/a);
	slope2=(-L2.b/L2.a);
	if((slope1*slope2)==-1)
	  {
	  	x=true;
	  	
	  }
    }
    
	return x;
	  
	
}
double lineType::Intersection(lineType L2)
{
	double determinant=0;
	double x=0,y=0;
	determinant=a*L2.b-L2.a*b;
	if(determinant==0)
	  {
	  	cout<<"Lines are parallel"<<endl;
	  }
	else
	 {
	 	x=(c*L2.b-L2.c*b)/determinant;
	 	y=(a*L2.c-L2.a*c)/determinant;
	 	cout<<"Intersection point:";
	 	cout<<"("<<x<<","<<y<<")"<<endl;
	 }
	 
}

