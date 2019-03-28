struct matriz{
    int lin;
    int col;
    float **v;

};

typedef struct matriz Matriz;

Matriz* mat_cria();

Matriz* mat_cria2(int m, int n);

void mat_libera (Matriz* mat);

void mat_atribui (Matriz* mat, int i, int j, float v);

void mat_preenche (Matriz *mat);

void mat_print(Matriz* mat);

int mat_linhas (Matriz* mat);

int mat_colunas (Matriz* mat);

Matriz* mat_transp(Matriz* mat);

void estrela(int n);
