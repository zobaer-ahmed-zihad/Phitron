#include<stdio.h>
int fun(char ar[], int i){

if(ar[i] == '\0') return 0; // base case
int len = fun(ar, i + 1);
return len + 1;

}
int main(){
    char ar[6] = "zihad";
    int length = fun(ar, 0);
    printf("%d", length);
    return 0;
}