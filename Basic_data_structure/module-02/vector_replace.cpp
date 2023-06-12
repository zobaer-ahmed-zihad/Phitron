#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {2,6,5,9,4,3,8,5,2,4,2};
    replace(v.begin(), v.end(), 2, 99); // replace 
    // replace(v.begin(), v.end()-1, 2, 99);

    for(int x:v){
        cout<<x<<" ";
    }

    return 0;
}