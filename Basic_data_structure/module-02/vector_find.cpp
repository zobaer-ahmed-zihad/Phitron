#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 7, 6, 2 ,3 ,7, 5 ,6 };

    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 7);
    // cout<<*it<<" "; 
    // auto it = find(v.begin(), v.end(), 7); // Found
    auto it = find(v.begin(), v.end(), 100); //Not found
    if(it == v.end()) cout<<"Not Found"; 
    else cout<<"Found";

    return 0;
}