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
};

int main()
{
  Rectangle box, box2;

  box.setLength(23.4);
  box.setWidth(55.6);
  box.setColor("Green");
  box.print();
  cout << "The area of the box is " << box.getArea() << endl;

  cout << "Box #2: " << endl;
  box2 = box;
  box2.setColor("Red"); 
  box2.print();
  return 0;
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
}


