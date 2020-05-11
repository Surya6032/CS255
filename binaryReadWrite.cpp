#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
struct PersonType
{
     char first[10];
     char last [20];
     int age;
};

int main()
{
    fstream infile;
    PersonType person[30];
    int count=0;
    infile.open("people-out.txt",ios::binary | ios::in);
    if(!infile)
       {
         cout<< "Could not create files\n";
         exit(0);

       }
    while(!infile.eof())
        {
         infile.read(reinterpret_cast <char*>(&person[count]),sizeof(PersonType));
         if(infile)
         {
         cout<< person[count].first<<" "<<person[count].last<<" " <<person[count].age<<endl;
         count++;
         }
         }
    infile.close();
    return 0;

}


