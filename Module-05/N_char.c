#include<stdio.h>
int main(){
    char a;
    int capital, small;
    
    scanf("%c", &a);

    if(a >= 'a' && a <= 'z'){
        capital = a - 32;
        printf("%c", capital);
    }else if(a >= 'A' && a <= 'Z'){
        small = a + 32; 
        printf("%c", small);
    }
   
    return 0;
}