#include <stdio.h>
#include "Fpontos.h"

int main() {
    Ponto *p, *p2, *p3;
    p = pt_cria();
    p2 = pt_cria();
    printf("(%.2f, %.2f)\n", p->x, p->y); 
    printf("(%.2f, %.2f)\n", p2->x, p2->y);
    // p3 = pt_soma(p, p2);
    // printf("(%.2f, %.2f)\n", p3->x, p3->y);
    // printf("%.2f\n", pt_dist(p, p2));
    pt_polar(p);
    pt_polar(p2);
    pt_libera(p);
    pt_libera(p2);
    // pt_libera(p3);
}