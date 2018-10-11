/*8. Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.
Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.*/

#include <stdio.h>

void main (){
    int i, j, vetor[3], matrix[3][3], vetorR[3] = {0,0,0};
    for(i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    for (i = 0; i < 3; i++)
        scanf("%d", &vetor[i]);
    for (i = 0; i < 3; i ++)
        for (j=0; j < 3; j++)
           vetorR[i] = vetorR[i] + vetor[j] * matrix [i][j];
     //   matrix[0][0] * vetor[0] + matrix[0][1]* vetor[1]+ vetor[]
    for(i = 0; i < 3; i++){
        putchar('|');
        for (j = 0; j < 3; j++)
            printf("%2d ", matrix[i][j]);
        putchar('|');
        if (i == 0)
            printf(" * ");
        else    
            printf("   ");
        printf("|%2d|", vetor[i]);
        if (i == 0)
            printf(" = ");
        else 
            printf("   ");
        printf("|%2d|", vetorR[i]);
        
        putchar('\n');
    }





}