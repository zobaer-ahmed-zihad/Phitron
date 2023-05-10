#include<stdio.h>
int main(){
    int x = 47;
    printf("%p\n", &x); // x er memory address

    int *ptr = &x; // ptr = x er memory address
    printf("%p\n", ptr); // pointer er memory address

    printf("ptr er me ad: %p", &ptr); // ptr er memory address

    printf("%d\n", *ptr); // print value using memory address

    *ptr = 100; // change value using pointer

    printf("%d", x); // value change using pointer 

    return 0;
}
