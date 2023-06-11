#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.size(); size
    // cout<<v.max_size(); maximum size
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout<<v.size()<<endl;
    // v.clear();
    cout<<v.size()<<endl;
    v.resize(3); // size decrease
    v.resize(6, 47); //size increase and add new 47 value for all
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.empty()<<endl; aita ture / false return kora (0, 1)
    
    // cout<<v.size()<<endl;
    return 0;
}