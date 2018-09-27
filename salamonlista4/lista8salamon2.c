//2)Elabora uma função que permita somar os elementos de um vetor de inteiros.
#include <stdio.h>

int soma(int v[], int a){
    int S = 0;
    for (int i = 0; i < a; i++)
        S = v[i] + S;
    return S;
}

void main (){
    int i, n;
    printf("Digite aqui o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    printf("Soma dos vetores: %d\n", soma(v, n));



}