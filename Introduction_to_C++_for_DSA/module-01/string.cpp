#include<iostream>
#include<utility>
#include<string.h>
using namespace std;

int main()
{
   char s[100];
   cin.getline(s, 100);
   // fgets(s, 100, stdin); // use kortam c te
   cout << s<<endl;
   cout<<strlen(s);
    return 0;
}