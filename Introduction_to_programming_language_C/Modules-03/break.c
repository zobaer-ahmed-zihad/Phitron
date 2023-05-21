#include<stdio.h>
int main(){
   int n;
   scanf("%d", &n);

   for(int i = 1; i <= n; i++){
    if(i == 7){
        break;
    }
    eprintf("%d\n", i);
   } 
   
    return 0;
}