// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter first array size : ";
    cin>>n;
    int *arr1 = new int[n];
    cout<<"First array elements : ";
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"New array size : ";
    cin>>m;
    int *arr2 = new int[m];
    for(int i = 0; i<m; i++){
        arr2[i] = arr1[i];
    }
    cout<<"New array elements : ";
    for(int i = n; i<m; i++){
        
        cin>>arr2[i];
    }
   
    cout<<"Array elements are : "<<endl;
    for(int i = 0; i<m; i++){
        cout<<arr2[i]<<endl;
    }
    delete[] arr1; //Delete arr1 from memory
    cout<<"first array elements : "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<endl;
    }
    return 0;
}