//problem : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include<stdio.h>
#include<limits.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int lowest = INT_MAX, position;
    for(int i = 0; i<n; i++){
        if(arr[i] < lowest){
            lowest = arr[i];
            position = i+1;
        }
    }
    printf("%d %d", lowest, position);

    return 0;
}