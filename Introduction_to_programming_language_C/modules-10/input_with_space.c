#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    //gets(ch);
    fgets(ch,20 , stdin);
    ch[18] = '\0';

    printf("%s", ch);
    return 0;
}