#include <stdio.h>
#include <stdlib.h>

struct matriz{
    int lin;
    int col;
    float **v;

};

typedef struct matriz Matriz;

Matriz* mat_cria();

void mat_libera (Matriz* mat);

void mat_atribui (Matriz* mat, int i, int j, float v);

int mat_linhas (Matriz* mat);

int mat_colunas (Matriz* mat);

int main (){
    Matriz* m;
    m = mat_cria();
    mat_atribui (m, 2, 1, 3.54);
    printf("%d %d --- %.2f\n", m->lin, m->col, m->v[2][2]);
    mat_libera(m);
}

Matriz* mat_cria(){
    Matriz* mat = malloc(sizeof(Matriz));
    int n, m;
    if (mat == NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }
    printf("Digite aqui as dimensoes da linha e coluna:");
    scanf("%d %d", &m, &n);
    mat->lin = m;
    mat->col = n;
    int i;
    mat->v = malloc(sizeof(float*)*m);
    for (i = 0; i < m; i++){
        mat->v[i] = malloc(sizeof(float)*n);
    }
    for (i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            mat->v[i][j] = 0;
        }
    }
    return mat;
}

void mat_libera (Matriz* mat){
    free(mat);
}

void mat_atribui (Matriz* mat, int i, int j, float v){
    mat->v[i][j] = v;
}