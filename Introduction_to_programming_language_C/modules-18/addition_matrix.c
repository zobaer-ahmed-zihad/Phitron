#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
   
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
   
    // int e=1;
    // for(int i = 0; i<row; i++){
    //     printf("%d ", a[i][e]);
    // }
    
    return 0;
}