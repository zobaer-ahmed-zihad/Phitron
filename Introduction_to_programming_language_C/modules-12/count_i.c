#include<stdio.h>
int main(){
    int n, even = 0, odd = 0; 
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[n]);

        if(arr[n] % 2 == 0){
            even = even + 1;
        }
        else if(arr[n] % 2 == 1 || -1){
            odd = odd + 1;
        }
    }
   
    printf("%d %d", even, odd);
    return 0;
}