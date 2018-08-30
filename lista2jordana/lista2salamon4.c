/* 4)Faça um programa para exibir e calcular a soma dos N primeiros termos da sequência 
de Fibonacci. Esta sequência começa com os termos 1 e 1 e, a partir do terceiro termo, 
os termos são calculados pela soma dos dois termos anteriores:
1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/
#include <stdio.h>

int main ()
{
    int N, i = 1, A = 1, B = 0, S = 0, S2 = 0;
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
    while (i<=(N-2)){
        A = A + B;
        S = S + A;
        printf("S igual: %d\n", S);
        B = B + A;
        S = S + B;
        printf("A igual: %d\n", A);
        printf("B igual: %d\n", B);
        printf("S igual: %d\n", S);
        if (i==(N-2)) {
            if (N % 2 == 0) {
                printf("O Valor da Soma e: %d\n", B);
                break;
            }
            else { 
                printf("O valor da Soma e: %d\n", A);
                break;
            }
        }
        i = 1 + i;
    }
}