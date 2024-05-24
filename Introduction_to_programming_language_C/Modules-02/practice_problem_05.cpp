#include<bits/stdc++.h>
using namespace std;
int main(){
    int tk;
    cin>>tk;
    
    if(tk >= 10000 ){
        cout<<"Gucci Bag\n";
        if(tk > 20000){
            cout<<"Gucci Belt";
        }
    }else if(tk >= 5000){
        cout<<"Levis Bag";
    }else{
        cout<<"Something";
    }
    
    return 0; 
}