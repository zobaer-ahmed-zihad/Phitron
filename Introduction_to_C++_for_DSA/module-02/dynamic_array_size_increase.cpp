#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int [5]; //Dynamic array
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    int *b = new int [7]; //Dynamic array
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 77;
    b[6] = 80;

    for (int i = 0; i < 7; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    delete[] a; //Delete array

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
    


    return 0;
}