

#include <stdio.h>

void estrela(int n){
    for(int i = 0; i < n; i++)
        putchar('*');
    putchar('\n');
}


int main (){
    int i, j, A[5][5], B[5][5], C[5][5];
    for (i = 0; i < 5; i++)
        for (j = 0; j< 5; j++)
            scanf("%d", &A[i][j]);
    for (i = 0; i < 5; i++)
        for (j = 0; j< 5; j++)
            scanf("%d", &B[i][j]);
    estrela(15);
    printf("Matrix A: \n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
            printf("%2d ", A[i][j]);
    putchar('\n');
    }
    estrela(15);
    printf("Matrix B: \n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
            printf("%2d ", B[i][j]);
    putchar('\n');
    }
    estrela(15);
    printf("Matrix C: \n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%2d ", C[i][j]);
        }
    putchar('\n');
    }
}