#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cin>>num1;
    int arr1[num1];
    for(int i = 0; i<num1; i++){
        cin>>arr1[i];
    }
    
    int num2; 
    cin>>num2;
    int arr2[num2];
     for(int i = 0; i<num2; i++){
        cin>>arr2[i];
    }
    for(int i = 0; i<num2; i++ ){
        cout<<arr2[i]<<" ";
    }
    int num3;
    cin>>num3;
    int arr3[num3];
    
    for(int i = 0; i<num3; i++){
        arr3[i] = arr1[i];
    }
    int j = num1 + 1;
    for(int i = j; i<num3; i++){
        arr3[i] = arr2[i];
    }
    for (int i = 0; i < num3; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    
   
    
    
    return 0;
}