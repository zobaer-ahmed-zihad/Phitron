#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
   
    if(a >= '0' && a <= '9'){
        printf("IS DIGIT");
    }else if(a >= 'a' && a <= 'z'){
        printf("ALPHA\n");
        printf("IS SMALL");
    }else if(a >= 'A' && a <= 'Z'){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }

    return 0;
}