/*3) Faça um programa que leia dois números N e M e:
a) Crie dinamicamente e preencha uma matriz de inteiros N x M;
b) Localize os três maiores números da matriz e mostre a linha e a coluna onde estão.
c) Crie dinamicamente e construa a matriz transposta M x N de inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, m, i, j, auxi, auxj, auxi2, auxj2, auxi3, auxj3, maior, maior2, maior3;
    auxi = auxj = auxi2 = auxi3 = 0;
    auxj2 = 1;
    auxj3 = 2;
    printf("Digite aqui as dimensões da matriz N x M:");
    scanf("%d%d", &n, &m);
    int **pN = malloc(sizeof(int*)*n);
    for (i = 0; i < n; i++){
        pN[i] = malloc(sizeof(int)*m);
        for(j = 0; j < m; j++){
            scanf("%d", &pN[i][j]);
        }
    }
    maior = pN[0][0];
    for (i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", pN[i][j]);
            if (maior < pN[i][j]){
                maior = pN[i][j];
                auxi = i;
                auxj = j;
            }
        }
        putchar('\n');
    }
    for (i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if (i == 0 & j == 0 && maior == pN[0][0]){
                maior2 == pN[0][1];
            }
            if (maior2 < pN[i][j] && pN[i][j] != pN[auxi][auxj]){
                maior2 = pN[i][j];
                auxi2 = i;
                auxj2 = j;
            }
        }
    }
    for (i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if (maior3 < pN[i][j] && pN[i][j] != pN[auxi][auxj] && pN[i][j] != pN[auxi2][auxj2]){
                maior3 = pN[i][j];
                auxi3 = i;
                auxj3 = j;
            }
        }
    }
    printf("Primeiro maior: %d \nLinha: \t\t%d\nColuna: \t%d\n", maior, auxi + 1, auxj + 1);
    printf("Segundo maior: %d \nLinha: \t\t%d\nColuna: \t%d\n", maior2, auxi2 + 1, auxj2 + 1);
    printf("Segundo maior: %d \nLinha: \t\t%d\nColuna: \t%d\n", maior3, auxi3 + 1, auxj3 + 1);
    for (i = 0; i < n; i++){
        free(pN[i]);
    }
    free(pN);
    return 0;
}