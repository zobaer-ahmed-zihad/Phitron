#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pos;
    cin>>pos;

    for(int i = pos+1; i<n; i++){
        arr[i-1] = arr[i];
    }

    //  for(int i = pos; i<n; i++){
    //     arr[i] = arr[i+1];
    // }
    
    //we can not remove the last element

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}