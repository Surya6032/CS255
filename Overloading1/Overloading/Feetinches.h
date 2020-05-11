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
    void print() const;
    bool operator == (const FeetInches &);
    FeetInches operator + (const FeetInches &);
};
