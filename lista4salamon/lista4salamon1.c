//1. Escreva uma função que receba um número inteiro e retorne o seu antecessor.

#include <stdio.h>

int previous(int a){
    return a-1;
}
int main ()
{
    int b;
    scanf("%d", &b);
    printf("%d\n", previous(b));

}