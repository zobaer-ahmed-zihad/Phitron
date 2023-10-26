#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    float a;
    double b = 9.24568;
    cin>>a;
    cout<< fixed << setprecision(2) << a<<endl;
    cout<< fixed << setprecision(3)<< b<<endl;

    return 0;
}