//4. No return + parameter

#include<stdio.h>

void multiply(int a, int b){
    int result = a * b;
    printf("%d", result);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    multiply(a, b);
    
    return 0;
}