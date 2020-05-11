#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
struct people
{
     char first[10];
     char last [20];
     int age;
};

int main()
{
    fstream outfile;
    people person[30];
    strcpy(person[0].first, "Bob");
    strcpy(person[0].last,  "Smith");
    person[0].age = 37;

    strcpy(person[1].first, "John");
    strcpy(person[1].last,  "Doe");
    person[1].age = 27;

    strcpy(person[2].first, "Minnie");
    strcpy(person[2].last,  "Mouse");
    person[2].age = 57;

    strcpy(person[3].first, "Daisy");
    strcpy(person[3].last,  "Duck");
    person[3].age = 28;
    
    outfile.open("people-out.txt", ios::binary | ios::out);                   
    outfile.write (reinterpret_cast <char*>(&person[0]),sizeof(people));
    outfile.write (reinterpret_cast <char*>(&person[1]),sizeof(people));
    outfile.write (reinterpret_cast <char*>(&person[2]),sizeof(people));
    outfile.write (reinterpret_cast <char*>(&person[3]),sizeof(people));

    outfile.close();
    return 0;

}


