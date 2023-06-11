#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // v.erase(v.begin()+2); // delete single value
    v.erase(v.begin()+2, v.begin()+4); // delete single value

    for(int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}