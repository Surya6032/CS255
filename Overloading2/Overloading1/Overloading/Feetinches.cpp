#include <iostream>
#include "Feetinches.h"
#include <cmath>
using namespace std;



FeetInches::FeetInches(int f, int i)
{
  feet= f;
  inches=i;
  simplify();

}
FeetInches::FeetInches()
{
  feet=0;
  inches=0;

}
void FeetInches:: setFeet(int f)
{
   feet=f;



}
void FeetInches::setInches(int i)
{

  inches=i;
  simplify();

}
int  FeetInches:: getFeet() const
{
  return feet;

}
int FeetInches::  getInches() const
{
 return inches;

}
void FeetInches:: print() const
{
 cout<< feet<< " Feet and "<< inches << " inches "<<endl;


}

void FeetInches::simplify()
{
 if (inches >= 12)
    {
       feet +=inches/12;
       inches = inches%12;
    }
 else if(inches < 0 )
   {
     feet -= 1 + abs(inches)/12;
     inches = 12 - abs(inches) % 12;
      
         

   }   

}

bool FeetInches::operator == (const FeetInches &right)
{
 bool status;
 if (feet == right.feet && inches == right.inches)
    status = true;
 else
    status = false;
 return status;
}

FeetInches FeetInches::operator + (const FeetInches &right)
{
  FeetInches temp;
  temp.feet = feet+right.feet;
  temp.inches = inches + right.inches;
  temp.simplify();
  return temp;


}

ostream &operator << (ostream &strm, const FeetInches &obj)
{
  strm << obj.feet << " feet" <<obj.inches <<" inches";
  return strm;



}

istream &operator  >> (istream &strm, FeetInches &obj)
{
  cout << "Feet:";
  strm>> obj.feet;
  cout<< "Inches:";
  strm >> obj.inches;
  obj.simplify();
  return strm;


}
