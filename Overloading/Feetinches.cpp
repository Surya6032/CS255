#include <iostream>
#include "Feetinches.h"
using namespace std;



FeetInches::FeetInches(int f, int i)
{
  feet= f;
  inches=i;

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
 cout<< feet<< "Feet and "<< inches << "inches "<<endl;


}
