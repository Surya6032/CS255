#include <iostream>
using namespace std;

int numChars(string str, char ch, int spot=0);

int main()
{
    string st="abacbcaabbdc";
    char ch='a';
    cout << numChars(st,ch,0)<<endl;
    return 0;
}

int numChars(string str, char ch, int spot)            //Default parameter
{
    if(str.length() == spot)
      return 0;
    else if(str[spot] == ch)
            return 1+numChars(str, ch, spot+1);
         else
            return numChars(str, ch, spot+1);
}
