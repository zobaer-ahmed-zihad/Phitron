#include<stdio.h>
int main(){
    char ch[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &ch[i]);
    }
     
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", ch[i]);
    // }
    int a[5];
    printf("%d", sizeof(a));
    return 0;
}