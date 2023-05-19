// 3. No return No parameter

#include<stdio.h>

void division(void){
    float a, b;
    scanf("%f %f", &a, &b);
    float result = a / b;
    printf("%.2f", result);

}

int main(){
    division();
    return 0;
}