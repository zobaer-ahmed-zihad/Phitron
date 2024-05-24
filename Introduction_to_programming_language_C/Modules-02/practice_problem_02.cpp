#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2;
    cin>>num1;
    cin>>num2;
    
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    float div = (num1*1.0) / num2;
    
    cout<<num1 <<" + "<<num2<<" = "<<sum<<"\n";
    cout<<num1 <<" - "<<num2<<" = "<<sub<<"\n";
    cout<<num1 <<" * "<<num2<<" = "<<mul<<"\n";
    cout<<num1 <<" / "<<num2<<" = "<<fixed<<setprecision(2)<<div;
    
    return 0; 
}