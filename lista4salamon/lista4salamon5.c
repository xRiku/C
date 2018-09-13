/* 5. Escreva uma função que receba 2 números inteiros,
 2 números reais indicando pesos, e retorne a média ponderada.*/

#include <stdio.h>

float mediap(int a, int b, float a1, float b1)
{
    float media = a * b;
    return (a*a1 + b*b1)/(a1+b1);
}

int main ()
{
    int a, b;
    float a1, b1;
    scanf("%d%d%f%f", &a, &b, &a1, &b1);
    printf("%.2f\n", mediap(a,b,a1,b1));


}