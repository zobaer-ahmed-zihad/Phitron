#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    if(num == 0){
        cout<<"Zero";
    }else if(num < 0){
        cout<<"Negative";
    }else{
        cout<<"Positive";
    }
    
    return 0; 
}