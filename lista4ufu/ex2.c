//2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos

#include <stdio.h>

int main (){
    int vetor[6], i;
    printf("Digite aqui os 6 inteiros: ");
    for (i = 0; i < 6; i++)
        scanf("%d", &vetor[i]);
    for (i = 0; i < 6; i++)
        printf("%d ", vetor[i]);
    putchar('\n');
    
}