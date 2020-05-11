#include <iostream>
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
    double getLength() const;
    double getWidth() const;
    string getColor() const;
    double getArea() const;
    void   print() const;
    Rectangle();                             //Constructor
    Rectangle(double,double, string col);   //Constructor
    ~Rectangle();                          //Destructor
};

int main()
{
  Rectangle box, box2(88,66,"purple");
  cout<< "Box before setting Value"<<endl;
  box.print();
  box.setLength(23.4);
  box.setWidth(55.6);
  box.setColor("Green");
  cout<<"Box after setting values"<<endl;
  box.print();
  cout<<"Box #2"<<endl;
  box2.print();
  
  return 0;
}
Rectangle::Rectangle(double len,double wid, string col)
{
  cout<<"Rectangle Object created with three parameters"<<endl;
  length = len;
  width  = wid;
  color  = col;
}
Rectangle::Rectangle()
{
 cout<<"Rectangle Object created with no parameters"<<endl;
 length=0;
 width=0;
 color="Black";
}
Rectangle::~Rectangle()
{

 cout<< "Rectangle object is destroyed"<<endl;

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


