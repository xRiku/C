#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

Ponto* pt_cria();

Ponto* pt_soma(Ponto *p1, Ponto *p2);

Ponto* pt_sub(Ponto *p1, Ponto *p2);

void pt_libera(Ponto* ponto);


int main() {
    Ponto *p, *p2, *p3;
    p = pt_cria();
    p2 = pt_cria();
    printf("(%.2f, %.2f)\n", p->x, p->y); 
    printf("(%.2f, %.2f)\n", p2->x, p2->y);
    p3 = pt_soma(p, p2);
    printf("(%.2f, %.2f)\n", p3->x, p3->y);
    pt_libera(p);
    pt_libera(p2);
}

Ponto* pt_cria(){
    Ponto* p = malloc(sizeof(Ponto));
    if (p == NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }
    printf("Digite aqui coordenadas x e y:");
    scanf("%f %f", &p->x, &p->y);
    //p->x = x;
    //p->y = y;
    return p;
}
void pt_libera(Ponto* ponto){
    free(ponto);
}

Ponto* pt_soma(Ponto *p1, Ponto *p2){
    Ponto* pp;
    float x3, y3;
    x3 = p1->x - p2->x;
    y3 = p1->y - p2->y;
    pp = pt_cria(x3, y3);
    return pp;
}
Ponto* pt_sub(Ponto *p1, Ponto *p2){
    Ponto* pp;
    float x3, y3;
    x3 = p1->x - p2->x;
    y3 = p1->y - p2->y;
    pp = pt_cria(x3, y3);
    return pp;
}