//2.Escreva uma função que receba 2 números inteiros e retorne o seu produto.

#include <stdio.h>

int produt(int a, int b)
{
    return a*b;
}
int main ()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", produt(a,b));
}