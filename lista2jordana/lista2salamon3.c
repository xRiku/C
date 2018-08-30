/* 3)Fazer um programa que leia vários números (um por vez) e imprima 0 (zero) se o número
não for múltiplo de 2, 3, 5 e 7. Imprimir 1 (um) se o número for múltiplo de 2 ou 3 e 2
(dois) se o número for múltiplo de 5 e 7. Sair do programa quando for digitado o valor -1. */

#include <stdio.h>

int main ()
{
    int numero;
    printf("Digite aqui o valor do numero: ");
    while (numero != -1) {
        scanf("%d", &numero);
        if ( numero % 7 != 0 && numero % 5 != 0 && numero % 2 != 0 && numero % 3 != 0)
            printf("0\n");
        else {
            if (numero % 2 == 0 || numero % 3 == 0 )
                printf ("1\n");
            else {
                if (numero % 5 == 0 && numero % 7 == 0)
                    printf ("2\n");
            }
        }
    }

}