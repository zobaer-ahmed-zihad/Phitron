#include<bits/stdc++.h>
using namespace std;
int main(){
    //first array input
    int n1;
    cin>>n1;
    int ar1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>ar1[i];
    }
    // second array input
    int n2;
    cin>>n2;
    int ar2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin>>ar2[i];
    }
    // copy array elements
    int ar3[n1+n2];
    for (int i = 0; i < n1+n2; i++)
    {
        ar3[i] = ar1[i];
    }
    
    
    

    for (int i = 0; i < n1+n2; i++)
    {
        cout<<ar3[i]<<" ";
    }
    
    

    return 0;
}