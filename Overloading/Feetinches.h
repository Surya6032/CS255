class FeetInches
{
  private:
    int feet;
    int inches;
  public:
    FeetInches(int, int);
    FeetInches();
    void setFeet(int);
    void setInches(int);
    int  getFeet() const;
    int  getInches() const;
    void print() const;
};
