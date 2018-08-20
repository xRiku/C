/* 6. Escreva um programa para calcular o valor de π de acordo com a
seguinte fórmula: */

#include <stdio.h>
#include <math.h>

int main ()
{
    int n, i=1;
    float sq = 0, pi;
    printf("Digite aqui o valor de n: ");
    scanf("%d", &n);
    while (i<=n) {
    sq = 6.0 / (i*i) + sq;
    i = i + 1;
    }
    pi = sqrt (sq);
    printf("O Valor de pi é: %.6f.\n", pi);

}