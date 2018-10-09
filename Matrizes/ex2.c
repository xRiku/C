/*2. Faça um programa que leia uma matriz A 5x5 e imprima
sua diagonal principal.*/

#include <stdio.h>

void main (){
    int i, j, matrix[5][5];
    for (i = 0; i < 5; i++)
        for (j = 0; j< 5; j++)
            scanf("%d", &matrix[i][j]);
    for (i = 0; i < 5; i++)
        for (j = 0; j< 5; j++)
            if (i == j)
                printf("%d ", matrix[i][j]);
    putchar('\n');

}