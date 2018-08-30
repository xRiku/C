/* 4)Faça um programa para exibir e calcular a soma dos N primeiros termos da sequência 
de Fibonacci. Esta sequência começa com os termos 1 e 1 e, a partir do terceiro termo, 
os termos são calculados pela soma dos dois termos anteriores:
1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/
#include <stdio.h>

int main ()
{
    int N, i = 1, A = 1, B = 0, S = 0, x = 0;
    printf("Digite aqui o numero de termos a serem somados: ");
    scanf("%d", &N);
    if (N == 1) {
        printf("O valor da soma e: 1\n");
        return 0;
    }
    if (N==2) {
        printf("O Valor da Soma e: 2\n");
        return 0;
    }
    while (i<=N){
        A = A + B;
        x = 1 + x;
        S = S + A;
        if (x == N){
            printf("O Valor da soma e: %d\n", S);
            break;
        }
        B = B + A;
        x = 1 + x;
        S = S + B;
        if (x == N) {
            printf("O valor da soma e: %d\n", S);
            break;
        }
        i = 1 + i;
    }
}