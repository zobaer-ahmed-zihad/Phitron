#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s", a, b);
    int value = strcmp(a,b);

    if(value == 0){
        printf("Same");
    }else if(value < 0){
        printf("First string is small");
    }else{
        printf("Second string is small");
    }
    return 0;
}