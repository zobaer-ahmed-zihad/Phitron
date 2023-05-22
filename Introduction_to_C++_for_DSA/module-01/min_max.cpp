#include<iostream>
#include<algorithm>
using namespace std;

// int my_min(int a, int b){
//     if(a < b) return a;
//     else return b;
// }
// int my_max(int a, int b){
//     if(a > b) return a;
//     else return b;
// }

int main()
{
    int a, b;
    cin>> a >>b;
    // int minimum = my_min(a,b);
    // int maximum = my_max(a, b);

    // cout<<minimum<< " "<< maximum;

    int mn = min(a,b); // use build in function
    int mx = max(a,b); // use build in function

    cout<<"Minimum "<<mn<<endl<<"Maximum "<<mx;
}