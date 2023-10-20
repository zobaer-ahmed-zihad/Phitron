#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        string section;

        Student(string n, int r, string s){
            name = n;
            roll = r;
            section = s;
        }
};

    Student fun(){
        Student s1("zihad", 356, "E");
        return s1;
    }

int main()
{
    Student student1 = fun();
    cout<<student1.roll<<endl;
    return 0;
}