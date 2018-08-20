//7. Faça um programa para informar se um número é primo.

#include <stdio.h>

int main ()
{
    int n, i = n, x = 0;
    printf("Digite aqui o numero a ser verificado: ");
    scanf("%d", &n);
    while (i>=(-n)) {
        if (n%i==0)
            x = 1 + x;
        if (i == 1)
            i = i - 2;
        else 
            i = i - 1;
    }
    if (x == 4) {
    printf("O numero avaliado e primo.\n");
    printf("Numero avaliado: %d\n", n);
    }
    else {
        printf("O numero avaliado nao e primo.\n");
        printf("Numero avaliado: %d\n", n);
    }
}