#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    int uppercase, lowercase;

    if( ch >= 65 && ch <= 90){
        char uppercase = ch + 32;
        printf("%c", uppercase);
    }else if(ch >= 97 && ch <= 122){
        char lowercase = ch - 32;
        printf("%c", lowercase);
    }
    // if(ch >= 'a' && ch <= 'z'){
    //     uppercase = ch - 32;
    //     printf("%c", uppercase);
    // }else if(ch >= 'A' && ch <= 'Z'){
    //     lowercase = ch + 32;
    //     printf("%c", lowercase);
    // }


    return 0;
}