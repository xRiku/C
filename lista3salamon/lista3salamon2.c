/* 2)Escreva um programa para ler um valor A e um valor N. Imprimir a soma dos N números 
a partir de A (inclusive). Caso N seja negativo ou zero, deverá ser lido um novo número 
para N (só para N).
Valores para testes:
A = 3; N = 2; Soma = 7 (3+4)
A = 4; N = 5; Soma = 30 (4+5+6+7+8)
A = -2; N = 4; Soma = -2 (-2+ -1 + 0 + 1) */

#include <stdio.h>

int main ()
{
    int A, N, soma = 0, i;
    printf("Digite aqui o valor de A: ");
    scanf("%d", &A);
    printf("Digite aqui o valor de N: ");
    while (1) {
        scanf("%d", &N);
        if (N > 0) {
            for (i = 1; i <= N; i++){
                soma = A + soma;
                A = A + 1;
            }
            break;
        }
        else 
            printf("Valor invalido.\nN deve ser positivo maior que 0.\n");
    }
    printf("Soma = %d\n", soma);
}