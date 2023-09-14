#include<stdio.h>
int main(){
    int i = 7;
    int x = i++; // 7
    int y = ++i; // 8
    printf("X - %d", x);
    printf("X - %d", y);

    return 0;
}