
#include <stdio.h>

int main (){
    int vetor[50], i, x = 101;
    for (i = 0; i < 50; i++, x++)
        vetor[i] = x;
    printf("Valor de cada vetor:");
    for (i = 0; i < 50; i++)
        printf(" %d", vetor[i]);
    putchar('\n');
}