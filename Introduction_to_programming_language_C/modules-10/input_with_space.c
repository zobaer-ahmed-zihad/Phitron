#include<stdio.h>
#include<string.h>
int main(){
    char ch[25];
    //gets(ch);
    fgets(ch,25 , stdin);
    

    printf("%s", ch);
   // printf("%d", sizeof(ch));
    return 0;
}