#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40};
    vector<int> v2 = {5, 6, 7};
    v.insert(v.begin()+3, 50); //insert single value
    v.insert(v.begin()+2, v2.begin(), v2.end()); //insert another vector
    v.insert(v.begin()+2, v2.begin(), v2.begin()+2); //insert few value
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}