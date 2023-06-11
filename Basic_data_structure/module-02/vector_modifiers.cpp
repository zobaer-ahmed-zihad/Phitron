#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x = {10, 20, 30};
    // vector<int> v = {1, 2, 3};
    // vector<int> x = {10, 20, 30, 40};
    vector<int> v = {1, 2, 3};
    // v = x; //O(1) x and v same size
    // v = x; //O(N) count maximum size
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}