#include<stdio.h>
int main(){
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if(a[i] == '\0' && b[i] == '\0'){
            printf("Same");
            break;
        }else if(a[i] == '\0'){
            printf("First string is small");
            break;
        }else if(b[i] == '\0'){
            printf("Second string is small");
            break;
        }

        if(a[i] == b[i]){
            i++;
        }else if(a[i] < b[i]){
            printf("First string is small");
            break;
        }else{
            printf("Second string is small");
            break;
        }
    }
   

    return 0;
}  