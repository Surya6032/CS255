#include <iostream>
#include <fstream>
using namespace std;
class Rectangle
{
  private:
    double length, width;
    string color;
  public:
    void setLength(double);
    void setWidth(double);
    void setColor(string);
    void setValue(double len,double wid, string col);
    void grow(double);
    double getLength() const;
    double getWidth() const;
    string getColor() const;
    double getArea() const;
    void   print() const;
    Rectangle();                             //Constructor
    Rectangle(double,double, string col);   //Constructor
    ~Rectangle();                          //Destructor
};

const int MAX_BOXES=10;
void readBoxesFromFile (Rectangle box[], int &numBoxes);
void printBoxes (Rectangle box[], int numBoxes);
int main()
{
  Rectangle box[MAX_BOXES];
  int numBoxes=0;
  readBoxesFromFile (box, numBoxes);
  printBoxes (box, numBoxes);
  box[3].grow(500);
  box[3].print();
  return 0;
}
void Rectangle::grow (double amount)
{
 length+= amount;
 width +=amount;
}
void printBoxes (Rectangle box[], int numBoxes)
{
 for(int j=0;j<numBoxes; j++)
   {
     box[j].print();
   }

}
void Rectangle::setValue(double len,double wid, string col)
{
  
  length = len;
  width  = wid;
  color  = col;
}
void readBoxesFromFile (Rectangle box[], int &numBoxes)
{
 numBoxes=0;
 ifstream boxFile;
 double lngth=0,wdth=0;
 string clr=" ";
 boxFile.open("boxes.txt");
 if (boxFile.fail())
 {
    cout<<"Error opening the file"<<endl;
    exit(1);
 }
 boxFile >> lngth >> wdth;
 while (!boxFile.eof())
 { 
   
   getline(boxFile>>ws,clr);

   box[numBoxes].setValue(lngth, wdth, clr);
   numBoxes++;
   boxFile >> lngth >> wdth;
   
 }
 boxFile.close();


}
Rectangle::Rectangle(double len,double wid, string col)
{
 
  length = len;
  width  = wid;
  color  = col;
}
Rectangle::Rectangle()
{
 
 length=0;
 width=0;
 color="Black";
}
Rectangle::~Rectangle()
{



}
void Rectangle::setLength(double len)
{
  length = len; 
}

void Rectangle::setWidth(double wid)
{
  width = wid; 
}

void Rectangle::setColor(string col)
{
  color = col; 
}

double Rectangle::getLength() const
{
  return length;
}

double Rectangle::getWidth() const
{
  return width;
}

string Rectangle::getColor() const
{
  return color;
}

double Rectangle::getArea() const
{ 
  double area=0;
  area = length * width;
  return area;
}

void Rectangle::print() const
{
  cout << "Length: " << length << endl;
  cout << "Width:  " << width << endl;
  cout << "Color:  " << color << endl;
  cout << endl;
}


