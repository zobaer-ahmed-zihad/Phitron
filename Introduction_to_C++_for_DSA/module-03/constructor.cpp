#include <bits/stdc++.h>
using namespace std;
class Friend
{
    public:
        string name;
        char location[100];
        int number;

        Friend(string n, char *lo, int num){
            name = n;
            strcpy(location, lo);
            number = num;
        }
};

int main()
{
    Friend fri1("Arpon Hossain", "Dhaka", 01564);
    cout<<fri1.name<<endl<<fri1.location<<endl;
    return 0;
}