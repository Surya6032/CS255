#include <iostream>
#include "lineType.h"
using namespace std;


lineType::lineType(int a,int b,int c)
{
  a=a;
  b=b;
  c=c;


}void lineType::Slope()
{
  double slope=0;
  if(b!=0)
    {
         slope=(-b)/static_cast<double>(a);
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
 cout<<"Value of a:";
 cin>>a;
 cout<<endl;
 cout<<"Value of b:";
 cin>>b;
 cout<<endl;
 cout<<"Value of c:";
 cin>>c;
 cout<<endl;


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
	slope1=(-b/static_cast<double>(a));
	slope2=(-L2.b/static_cast<double>(L2.a));
    if((a==0 && L2.b==0) || (L2.a==0 && b==0))
        {

          x=true;

        }

	else if((slope1*slope2)==-1)
	  {
	  	x=true;

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

