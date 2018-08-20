/* Faça um programa que leia números inteiros e retorne o maior dos
números digitados até o momento e a média atual. O programa
termina quando o usuário entra o número zero. */

#include <stdio.h>

int main ()
{
    int n, i = 1, maior;
    float media;
    while (1){
        printf("Digite aqui o numero a ser adicionado: ");
        scanf("%d", &n);
        if (n == 0)
            break;
        if (i==1)
            maior = n;
        if (maior < n)
            maior = n;
        printf("Numero digitado: \t%d\n", n);
        printf("Maior numero atm: \t%d\n", maior);
        media = n + media;
        printf("Media atual: \t\t%.6f\n", media/i);
        i = i + 1;
    }
    printf("***** FIM DO PROGRAMA *****\n");


}