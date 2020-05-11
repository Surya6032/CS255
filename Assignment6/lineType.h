using namespace std;


class lineType
{
  private:
     int a,b,c;
  public:
     void Slope();
     bool Equal(lineType L2);
     void setABC();
     bool Parallel(lineType L2);
     bool Perpendicular(lineType L2);
     double Intersection(lineType L2);

};
