#include<bits/stdc++.h>
using namespace std;
class Student
{
    public: 
    string name;
    int roll;
    string section;
};

int main()
{
    Student zihad;
    zihad.name = "Zobaer Ahmed";
    zihad.roll = 877;
    zihad.section = "E";

    cout<<zihad.section<<endl<<zihad.name<<endl;

    Student imran;
    imran.name = "Imran Hossain";
    imran.roll = 984;
    imran.section = "H";

    cout<<imran.section<<endl<<imran.name;
    return 0;
}