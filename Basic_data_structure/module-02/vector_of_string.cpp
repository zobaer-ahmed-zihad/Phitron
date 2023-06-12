#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  WITHOUT SPACE
    int n;
    cin>>n;
    vector<string> v;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(string st: v)
    {
        cout<<st<<endl;
    }
    return 0;
}