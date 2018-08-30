/* 2) Escreva  um  programa  que  solicite  dois  caracteres  de  A  a  Z  ao  usuário  e  imprima  o
número de caracteres existente entre eles. */   
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    char letra1, letra2, numero;
    while (1) {
        printf("Digite aqui a letra: ");
        scanf("%c", &letra1);
        scanf(" %c", &letra2);
        if (letra1 >= 'A' && letra1 <= 'Z' && letra2 >= 'A' && letra2 <= 'Z') {
            numero = abs(letra1 - letra2);
            printf("O numero de caracteres existente entre eles e: %d\n", (int) numero);
            break;
        }
        else 
            printf("ENTRADA INVALIDA.\n");
    }   
}