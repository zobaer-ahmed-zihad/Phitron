#include<stdio.h>

void hello(){
    printf("Hello ");
    world();
}
void world(){
    printf("World!\n");
}

int main(){
    hello();
    printf("End.");

    return 0;
}