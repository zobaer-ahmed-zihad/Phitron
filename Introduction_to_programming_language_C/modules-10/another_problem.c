#include<stdio.h>
#include<string.h>
int main(){
    char a[1000001];
    fgets(a, sizeof(a), stdin);
    int i = 0;
    while(a[i] != '\\'){
        printf("%c", a[i]);
        i++;
    }

    return 0;
}