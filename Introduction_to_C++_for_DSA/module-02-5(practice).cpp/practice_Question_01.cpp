// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int *get_array(int n){
    int *arr = new int[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    return arr; 
}

int main() {
    int n;
    cin>>n;
    int *array = get_array(n);
    for(int i = 0; i<n; i++){
        cout<<array[i]<<endl;
    }
    return 0;
}