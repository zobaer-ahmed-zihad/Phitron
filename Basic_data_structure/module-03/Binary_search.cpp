#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int x;
    cin>>x;
    int l = 0;
    int r = n - 1;
    bool flag = false;
    while(l <= r){
        int mid_index = (l + r) / 2;
        if(mid_index == x){
            flag = true;
            break;
        }
        if(mid_index < x){
            l = mid_index + 1;
        }else{
            l = mid_index - 1;
        }
    }
    if(flag == true) cout<<"Yes";
    else cout<<"No";

    return 0;
}