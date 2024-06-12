#include<stdio.h>
int main(){
     char ch;
     scanf("%c", &ch);


    if(ch >= 'a' && ch <= 'z'){
        printf("%c", ch-32);
    }else if(ch >= 'A' && ch <= 'Z'){
        printf("%c", ch+32);
    }

    // if(ch > 96 && ch < 123){
    //     printf("%c", ch-32);
    // }else if(ch > 64 && ch < 91){
    //     printf("%c", ch+32);
    // }

    return 0;
}