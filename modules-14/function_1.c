#include<stdio.h>

int sum(int a, int b){
     int addition = a + b;

     return addition;   
    }

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int result = sum(x, y);
    printf("%d", result);    

    return 0;
}