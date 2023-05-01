#include<stdio.h>

void division(int a, int b){
    int result = a - b;
    printf("%d", result);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    division(a, b);
    
    return 0;
}