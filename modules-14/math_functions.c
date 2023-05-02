#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    double a;
    scanf("%lf", &a);
    double Floor = floor(a); // math.floor()
    double Ceil = ceil(a); // math.ceil()
    double Round = round(a); // math.round()
    double Sqrt = sqrt(a); // math.sqrt()

    double x, y;
    scanf("%lf %lf", &x, &y);
    double Pow = pow(x, y); //math.pow()

    double m;
    scanf("%lf", &m);
    double Abs = abs(m);

    
    printf("floor - %lf\n", Floor);
    printf("Ceil - %lf\n", Ceil);
    printf("round - %lf\n", Round);
    printf("Sqrt - %lf", Sqrt);
    printf("Pow - %lf", Pow);
    printf("Abs - %lf", Abs);


    

    return 0;
}