/*6. Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor*/

#include <stdio.h>

int main (){
    int vetor[10], i, maior, menor;
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (i == 0)
            maior = menor = vetor[i];
        if (maior < vetor[i])
            maior = vetor[i];
        if (menor > vetor[i])
            menor = vetor[i];
    }
    printf("Menor valor do vetor: %d\nMaior valor do vetor: %d\n", menor, maior);
}