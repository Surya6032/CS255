#include <iostream>
#include "lineType.h"
using namespace std;

double lineType::Slope()
{
  double slope=0;
  slope=(-b)/a;
  return slope;

}
void lineType::setABC()
{
 cin>>a;
 cin>>b;
 cin>>c;


}
/*int lineType::Equals(int a,int b,int c)
{
  a=a


}
lineType::Equal()
{



}
lineType::lineType()
{
    //ctor
}

lineType::~lineType()
{
    //dtor
}*/
