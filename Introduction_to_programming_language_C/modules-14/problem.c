#include <stdio.h>

int main() {
    int i, eng[100], ban[100], math[100];
    float eng_avg = 0, ban_avg = 0, math_avg = 0;
    
    for (i = 0; i < 3; i++) {
        printf("Enter marks for student %d (English, Bangla, Maths): ", i+1);
        scanf("%d %d %d", &eng[i], &ban[i], &math[i]);
        
        eng_avg = eng_avg + eng[i];
        ban_avg = ban_avg + ban[i];
        math_avg = math_avg + math[i];
    }
    
    eng_avg = eng_avg / 100; 
    ban_avg = ban_avg / 100;
    math_avg = math_avg / 100;
    
    printf("Average marks for English: %.2f\n", eng_avg);
    printf("Average marks for Bangla: %.2f\n", ban_avg);
    printf("Average marks for Maths: %.2f\n", math_avg);
    
    return 0;
}
