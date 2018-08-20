//o) Faça um programa que mostre se um número inteiro é par ou ímpar.

#include <stdio.h>

int main ()
{
    int numero;
    printf("\t ***** Par ou Impar? *****\n");
    printf("Digite aqui o seu numero: ");
    scanf("%d", &numero);
    if (numero%2 == 0)
    {
        printf("O numero e PAR!\n");
    }
    else 
        printf("O numero e IMPAR\n");

}