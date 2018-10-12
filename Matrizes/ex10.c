
#include <stdio.h>
#include <string.h>


void estrela(int a){
    for (int i = 0; i < a; i++)
        putchar('*');
    putchar('\n');
}
int isequal(int n, int m){
  if (n == m)
    return 1;
  else 
    return 0;  
}

int main (){
    int i1, j1, i2, j2, i3, j3, i, j, k, x = 0;
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
             printf("%2d ", A[i][j]);
    putchar('\n');
    }
    estrela(13);
    for (i = 0; i < i2; i++){
        for (j = 0; j < j2; j++)
             printf("%2d ", B[i][j]);
    putchar('\n');
    }
    estrela(13);
    for (i = 0; i < i3; i++){
        for (j = 0; j < j3; j++)
             printf("%2d ", C[i][j]);
    putchar('\n');
    }
    int D[i1][j2];
    memset( D, 0, i1*j2*sizeof(int));
    if (j1 == i2 && i1 == i3 && j3 == j2 ){
        for (i = 0; i < i1; i++)
            for(j = 0; j < j2; j++){
                for (k = 0; k < j1; k++)
                    D[i][j] = D[i][j] + A[i][k] * B[k][j];
            if (isequal(D[i][j], C[i][j]))
                x++;
            }
    }
    else 
        printf("DIFERENTE.\n");
    estrela(13);
    for (i = 0; i < i1; i++){
        for (j = 0; j < j2; j++)
             printf("%2d ", D[i][j]);
    putchar('\n');
    }
    if (x == j3*i3)
        printf("IGUAL.\n");
    else    
        printf("DIFERENTE.\n");
}