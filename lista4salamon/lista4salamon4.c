/*4. Escreva uma função que receba 3 números reais (ponto flutuante) 
e retorne a sua média aritmética. */

#include <stdio.h>

float mediaf(float a, float b, float c)
{
    return (a + b + c)/3;
}
int main ()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("%.2f\n", mediaf(a,b,c));

}