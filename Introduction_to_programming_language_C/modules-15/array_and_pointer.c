#include<stdio.h>
int main(){
    int ar[5] = {5, 10, 15, 20, 25};

    int *ptr = &ar[0];
    // First prove Array ar ekta pointer
    // printf("0th index er address : %p\n", ptr);
    // printf("0th index er address : %p\n", ar);
    
    // Second prove Array ar ekta pointer
    printf("0th index er value: %d \n", ar[0]);
    printf("0th index er value: %d\n", *ar);

    printf("First index er value: %d\n", *(ar + 1));

    printf("%d\n",*(ar+2));
    printf("%d\n",*(2+ar));
    printf("%d\n", ar[2]);
    printf("%d\n", 2[ar]);

    return 0;
}