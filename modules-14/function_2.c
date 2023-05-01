#include<stdio.h>

int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int addition = a + b;

    return addition;
}

int main(){

    int result = sum();
    printf("%d", result);
    
    return 0;
}