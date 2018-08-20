/* 8. Faça um programa que calcule a soma S dos termos da sequência
abaixo, até que S assuma um valor mais próximo possível de um
limite dado como entrada. */

#include <stdio.h>
#include <math.h>

int main ()
{
    float S, x;
    int n, i=0;
    printf("Digite aqui o valor para definir como limite: ");
    scanf("%d", &n);

    while (S<=n) { 
        S = exp(i) + S;
        if (S>=n) {
            S = x;
            break;
        }
        x = S;
        i = i + 1;
    }
    printf("O numero de termos a serem somados foi igual a \t%d\n", i);
    printf("O valor mais proximo possivel do limite dado: \t%.6f\n", S);
    printf("O limite dado foi: \t\t\t\t%d\n", n);
}
