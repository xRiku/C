/* 4. Faça um programa que leia n números e retorne o maior e o
menor destes, a quantidades de pares, a quantidade de impares, e a
média deles. */
#include <stdio.h>

int main ()
{
    int n, i, reserva, x, y, maior, menor;
    float media;
    printf("Digite aqui o numero de numeros de entrada: ");
    scanf("%d", &n);
    i = x = y = 0;
    while (i<n){
        scanf("%d", &reserva);
        if (i==0)  
            maior = menor = reserva;
        if (maior < reserva)
            maior = reserva;
        if (menor > reserva)
            menor = reserva;    
        if (reserva%2==0)
            x = x + 1;
        else 
            y = y + 1;
        media = reserva + media;
        i = i + 1;
    }
    media = media/n;
    printf("Maior numero: \t\t%2d\n", maior);
    printf("Menor numero: \t\t%2d\n", menor);
    printf("Numero de pares:\t%2d\n", x);
    printf("Numero de impares:\t%2d\n", y);
    printf("Media dos valores apresentados: %.2f\n", media);
}