#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = 100001, max = -100001;
    int min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if( min > ar[i]){
            min = ar[i];
            min_index = i;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
       if( max < ar[i]){
            max = ar[i];
            max_index = i;
        }
    }
    ar[min_index] = max;
    ar[max_index] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    
    
    return 0;
}