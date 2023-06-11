#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v //type 1
    // vector<int> v(4) //type 2
    // vector<int> v(4, 7) //type 3
    // vector<int> v(6,2) //type 4 
    // vector<int> v2(v) //type 4 (copy all v elements)
    // int a[4] = {2, 5, 7, 4}; // type 5
    // vector<int> v(a, a+4) //type 5

    // int a[4] = {2, 5, 7, 4};
    // vector<int> v(a, a+4);
    vector<int> v = {4, 8, 6, 7 }; // direct vector initialize

    for(int i = 0; i<v.size(); i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    return 0;
}