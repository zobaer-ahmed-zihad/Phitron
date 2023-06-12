#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={5,10,15,20,25};
    // cout<<v[0]; access first element
    // cout<<v.front();  access fist element
    // cout<<v[v.size()-1]; access last element
    // cout<<v.back();  access last element

    // vector<int>::iterator it;
    for (auto it =v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }
    

    return 0;
}