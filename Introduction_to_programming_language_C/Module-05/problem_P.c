#include<stdio.h>
int main(){
    int a, firstDigit;
    scanf("%d", &a);

    firstDigit = a / 1000;

    if(firstDigit % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }


    return 0;
}