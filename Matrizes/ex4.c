#include <stdio.h>


void main(){
    int i, j, matrix[5][3], matrixT[3][5];
    for (i = 0; i < 5; i++)
        for (j = 0; j< 3; j++)
            scanf("%d", &matrix[i][j]);
     for (i = 0; i < 5; i++){
        for (j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
    putchar('\n');
    }
    for (j = 0; j < 3; j++){
        for (i = 0; i < 5; i++){
            matrixT[j][i] = matrix[i][j];
            printf("%d ", matrixT[j][i]);
        }
    putchar('\n');
    }
}