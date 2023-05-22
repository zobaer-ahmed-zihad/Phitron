#include<iostream>
using namespace std;
int main()
{
   int a;
   cin>> a;
   switch(a % 2 == 0)
   {
    case true:
        cout<< "Even"<<endl;
        break;
    default:
        cout<< "Odd"<<endl;
        break;
   }
    
    return 0;
}