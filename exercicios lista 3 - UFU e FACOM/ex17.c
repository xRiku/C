
#include <stdio.h>

int main ()
{
    int i = 1, n, S = 0;
    printf("Digite aqui o valor do ultimo algarismo positivo a ser somado: ");
    do {
        scanf("%d", &n);
        if (n>=0) {
            while (i<=n) {
                S = i + S;
                i++;
            }
            printf("Soma: %d\n", S);
            break;
        }
        else
            printf("Valor invalido.\nDigite aqui um numero positivo:\n");
    }
    while (n < 0 );

}