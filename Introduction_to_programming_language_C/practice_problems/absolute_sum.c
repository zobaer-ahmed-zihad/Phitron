#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int sum = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);

        sum = sum + arr[i];

    }

    if(sum < 0){
    printf("%d\n", sum*-1);
    }else{
        printf("%d\n", sum);
    }


    return 0;
}