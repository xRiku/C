


#include <stdio.h>


void estrela(int a){
    for (int i = 0; i < a; i++)
        putchar('*');
    putchar('\n');
}

int main (){
    int i1, j1, i2, j2, i3, j3, i, j; 
    printf("Digite aqui as linhas e colunas da matriz A: ");
    scanf("%d %d", &i1, &j1);
    printf("Digite os numeros da matriz: ");
    int A[i1][j1];
    for (i = 0; i < i1; i++)
        for (j = 0; j < j1; j++)
            scanf("%d", &A[i][j]);
    printf("Digite aqui as linhas e colunas da matriz B: ");
    scanf("%d %d", &i2, &j2);
    printf("Digite os numeros da matriz: ");
    int B[i2][j2];
    for (i = 0; i < i2; i++)
        for (j = 0; j < j2; j++)
             scanf("%d", &B[i][j]);
    printf("Digite aqui as linhas e colunas da matriz C: ");
    scanf("%d %d", &i3, &j3);
    printf("Digite os numeros da matriz: ");
    int C[i3][j3];
    for (i = 0; i < i3; i++)
        for (j = 0; j < j3; j++)
             scanf("%d", &C[i][j]);
    estrela(13);
    for (i = 0; i < i1; i++){
        for (j = 0; j < j1; j++)
             printf("%d ", A[i][j]);
    putchar('\n');
    }
    estrela(13);
    for (i = 0; i < i2; i++){
        for (j = 0; j < j2; j++)
             printf("%d ", B[i][j]);
    putchar('\n');
    }
    estrela(13);
    for (i = 0; i < i3; i++){
        for (j = 0; j < j3; j++)
             printf("%d ", C[i][j]);
    putchar('\n');
    }
             
    
}