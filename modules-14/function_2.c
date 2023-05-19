// 

#include<stdio.h>

int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int division = a - b;

    return division;
}
int main(){
    int result = sum();
    printf("%d", result);
    
    return 0;
}