/*7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra. */
#include <stdio.h>

int main (){    
    int vetor[10], i, maior, mi = 0;
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (i == 0)
            maior = vetor[i];
        if (maior < vetor[i]){
            maior = vetor[i];
            mi = i;
        }
    }
    printf("O vetor e: ");
    for (i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
    printf("\nO maior elemento do vetor é: \t%d\n", maior);
    printf("Posicao do maior elemento:\t%d\n", mi);
}