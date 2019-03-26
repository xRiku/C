#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Fpontos.h"

Ponto* pt_cria(){
    Ponto* p = malloc(sizeof(Ponto));
    if (p == NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }
    printf("Digite aqui coordenadas x e y:");
    scanf("%f %f", &p->x, &p->y);

    return p;
}

void pt_libera(Ponto* ponto){
    free(ponto);
}

Ponto* pt_soma(Ponto *p1, Ponto *p2){
    Ponto* pp = malloc(sizeof(Ponto));
    pp->x = p1->x + p2->x;
    pp->y = p1->y + p2->y;
    return pp;
}

Ponto* pt_sub(Ponto *p1, Ponto *p2){
    Ponto* pp = malloc(sizeof(Ponto));
    pp->x = p1->x - p2->x;
    pp->y = p1->y - p2->y;
    return pp;
} 

float pt_dist(Ponto *p1, Ponto *p2){
    float dist;
    dist = (p2->x - p1->x)*(p2->x - p1->x)+( p2->y - p1->y)*( p2->y - p1->y);
    dist = sqrt(dist);
    return dist;
}

void pt_polar(Ponto *p1){
    float r = sqrt(p1->x*p1->x + p1->y*p1->y);
    float ang = atan(p1->y/p1->x);
    // p1->x = r * cos(ang);
    // p1->y = r * sin(ang);
    printf("(%f, %f)\n", r, ang);
}