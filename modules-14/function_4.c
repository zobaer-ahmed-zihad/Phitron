#include<stdio.h>

void subtraction(void){
    float a, b;
    scanf("%f %f", &a, &b);
    float result = a / b;
    printf("%.2f", result);

}

int main(){
    subtraction();
    return 0;
}