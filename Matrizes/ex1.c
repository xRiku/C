//1. Faça um programa que leia e imprima uma matriz A 5x5.

#include <stdio.h>

int main (){
    int i, j, matrix[5][5];
    for (i = 0; i < 5; i++)
        for (j = 0; j< 5; j++)
            scanf("%d", &matrix[i][j]);
    for (i = 0; i < 5; i++){
        for (j = 0; j< 5; j++)
            printf("%d ", matrix[i][j]);
    putchar('\n');
    }
}