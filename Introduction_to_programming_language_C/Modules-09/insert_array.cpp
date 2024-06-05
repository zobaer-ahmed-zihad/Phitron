#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   
    int pos, value;
    cin>>pos>>value;

    // Main core part 
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = value;

    for (int i = 0; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}