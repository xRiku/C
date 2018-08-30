/* 5)Faça um programa para calcular o Máximo Divisor Comum entre 2 números.
Observe as seguintes propriedades do MDC:
MDC(x, y) = MDC(x − y, y), se x > y;
MDC(x, y) = MDC(y, x);
MDC(x, x) = x.
Exemplo: MDC(3,5)=MDC(5,3)=MDC(2,3)=MDC(3,2)=MDC(1,2)=MDC(2,1)=MDC(1,1)=1 */

#include <stdio.h>

int main ()
{
    int numero1, numero2, aux;
    printf("Digite aqui os numeros a serem calculados o MDC: ");
    scanf("%d%d", &numero1, &numero2);
    while (1) {
        printf("MDC (%d,%d)\n", numero1, numero2);
        if (numero1 > numero2) {
            numero1 = numero1 - numero2;
            printf("MDC (%d,%d)\n", numero1, numero2);
        }
        if (numero1 < numero2)  {
            aux = numero1;
            numero1 = numero2;
            numero2 = aux;
            printf("MDC (%d,%d)\n", numero1, numero2);
        }
        if (numero1 == numero2) {
            printf("MDC (%d,%d) = %d\n", numero1, numero2, numero1);
            break;
        }
    }
}