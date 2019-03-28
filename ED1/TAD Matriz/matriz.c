#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

//Aloca espaço para o TAD e sua matriz 

Matriz* mat_cria(){
    Matriz* mat = malloc(sizeof(Matriz));
    int n, m;
    if (mat == NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }
    printf("Digite aqui as dimensoes da linha e coluna:");
    scanf("%d %d", &mat->lin, &mat->col);
    int i;
    mat->v = malloc(sizeof(float*)*mat->lin);
    for (i = 0; i < mat->lin; i++){
        mat->v[i] = malloc(sizeof(float)*mat->col);
    }
    for (i = 0; i < mat->lin; i++){
        for (int j = 0; j < mat->col; j++){
            mat->v[i][j] = 0;
        }
    }
    return mat;
}

//Aloca espaço para o TAD e sua matriz com as linhas e colunas de parametro

Matriz* mat_cria2(int m, int n){
    Matriz* mat2 = malloc(sizeof(Matriz));
    mat2->lin = m;
    mat2->col = n;
    if (mat2 == NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }
    int i;
    mat2->v = malloc(sizeof(float*)*m);
    for (i = 0; i < m; i++){
        mat2->v[i] = malloc(sizeof(float)*n);
    }
    for (i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            mat2->v[i][j] = 0;
        }
    }
    mat_print(mat2);
    return mat2;
}

//Preenche a matriz do TAD com valores especificos

void mat_preenche(Matriz *mat){
    printf("Digite aqui os valores que serão preenchidos na matriz:");
    for (int i = 0; i < mat->lin; i++){
        for (int j = 0; j < mat->col; j++){
            scanf("%f", &mat->v[i][j]);
        }
    }
}

//Transpoe a matriz do TAD

Matriz* mat_transp(Matriz* mat){
    int i, j, a, b;
    a = mat->lin;
    b = mat->col;
    Matriz *m2;
    m2 = mat_cria2(b, a);
    for(i = 0; i < m2->lin; i++){
        for (j = 0; j < m2->col; j++){
            m2->v[i][j] = mat->v[j][i];
        }
    }
    mat_libera(mat);
    return m2;
}

//Atribui um valor a dada posição da matriz dentro do TAD

void mat_atribui (Matriz* mat, int i, int j, float v){
    mat->v[i][j] = v;
}

//Printa a Matriz do TAD

void mat_print(Matriz* mat){
    for (int i = 0; i < mat->lin; i++){
        for (int j = 0; j < mat->col; j++){
            printf("%.2f ", mat->v[i][j]);
        }
        putchar('\n');
    }
}

//Libera o TAD 

void mat_libera (Matriz* mat){
    for (int i = 0; i < mat->lin; i++){
        free(mat->v[i]);
    }
    free(mat->v);
    free(mat);
}

//Imprime uma linha de estrelas com base no inteiro de parametro

void estrela(int n){
    for (int i = 0; i < n; i++){
        putchar('*');
    }
    putchar('\n');
}
