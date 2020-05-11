//function prototype for overload stream operator
#include <iostream>
using namespace std;
class FeetInches;
ostream &operator << (ostream &, const FeetInches&);
istream &operator >> (istream &, FeetInches&);

class FeetInches
{
  private:
    int feet;
    int inches;
    void simplify();
  public:
    FeetInches(int, int);
    FeetInches();
    void setFeet(int);
    void setInches(int);
    int  getFeet() const;
    int  getInches() const;
   // void print() const;
    bool operator == (const FeetInches &);
    FeetInches operator + (const FeetInches &);
    
    //friencs
    friend ostream &operator << (ostream &, const FeetInches&);
    friend istream &operator >> (istream &, FeetInches&);
    
};
