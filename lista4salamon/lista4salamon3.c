//3. Escreva uma função que receba 3 números inteiros e retorne a sua média aritmética.

#include <stdio.h>

int media(int a, int b, int c)
{
    return (a + b + c)/3;
}

int main ()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", media(a,b,c));

}