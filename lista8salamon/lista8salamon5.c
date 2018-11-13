/*5) Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais.
A implementação deste programa deve considerar as dimensões fornecida pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
void arrumar(int a, char b){
    for (int i = 0; i < a; i++){
        putchar(b);
    }
    putchar('\n');
}


int main() {
    unsigned int M, N;
    printf("Digite aqui o numero de linhas da matriz: ");
    scanf("%d", &M);
    printf("Digite aqui o numero de colunas da matriz: ");
    scanf("%d", &N);
    int **pN = malloc (sizeof(int*)* M), **pN2 = malloc (sizeof(int*)* M), i, j;
    arrumar(15, '=');
    puts("Matriz 1:");
    for (i = 0; i < M; i++){
        pN[i] = malloc(sizeof (int) * N);
        for (j = 0; j < N; j++){
            scanf("%d", &pN[i][j]);
        }
    }
    arrumar(15, '=');
    puts("Matriz 2:");
    for (i = 0; i < M; i++){
        pN2[i] = malloc(sizeof (int) * N);
        for (j = 0; j < N; j++){
            scanf("%d", &pN2[i][j]);
        }
    }
    arrumar(15, '=');
    puts("Matriz 1:");
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%d ", pN[i][j]);
        }
        putchar('\n');
    }
    arrumar(15, '=');
    puts("Matriz 2:");
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%d ", pN2[i][j]);
        }
        putchar('\n');
    }
    arrumar(15, '=');
    puts("Matriz 3 (Soma das matrizes):");
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%d ", pN[i][j] + pN2[i][j]);
        }
        putchar('\n');
    }
    for (i = 0; i < M; i++){
        free(pN[i]);
        free(pN2[i]);
    }
    free(pN);
    free(pN2);
    return 0; 
}