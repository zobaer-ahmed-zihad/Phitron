#include<stdio.h>
int main(){
    long long int e, m, b;
    scanf("%lld %lld %lld", &e, &m, &b);

    if(e == 0 || b ==0){
        printf("0");
    }else{
        long long int min = e;
        if(m < min){
            min = m;
        }else if(b < min){
            min = b;
        }
        long long int result = min;
        e -= min;
        m -= min;
        b -= min;

        if(e/2 < b){
            result += e/2;
        }else{
            result += b;
        }
    printf("%lld", result);
    }
    
    return 0;
}