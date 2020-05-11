#include <iostream>
#include "lineType.h"

using namespace std;

int main()
{
    lineType values,values1;
    cout<<"Values for line one:"<<endl;
    values.setABC();
    cout<<"Values for line two:"<<endl;
    values1.setABC();
    cout<<"Slope for line one:"<<endl;
    cout<<values.Slope();
    cout<<"Slope for line two:"<<endl;
    cout<<values1.Slope();
    return 0;
}
