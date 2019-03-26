struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

// Aloca um espaço unico para o ponto;
Ponto* pt_cria();

// Soma dois pontos e aloca resultado para o ponto resultante;
Ponto* pt_soma(Ponto *p1, Ponto *p2);

//Subtrai o segundo ponto do primeiro e aloca espaço para o ponto resultante
Ponto* pt_sub(Ponto *p1, Ponto *p2);

//Calcula a distância entre 2 pontos
float pt_dist(Ponto *p1, Ponto *p2);

//Libera o espaço alocado pelo ponto
void pt_libera(Ponto* ponto);

//Mostra as coordenadas do ponto em forma de coordenadas polares
void pt_polar(Ponto *p1);