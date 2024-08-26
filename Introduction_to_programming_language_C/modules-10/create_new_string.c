#include<stdio.h>
#include<string.h>
int main(){
    char a[1000], b[1000];
    
    scanf("%s", a);
    scanf("%s", b);
    int m = strlen(a);
    int n = strlen(b);

    printf("%d %d",m,n);
    printf("\n%s %s",a,b);

    return 0;
}