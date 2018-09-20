
#include <stdio.h>

int main (){
    int vetor[20], i;
    for (i = 0; i<20; i++)
        scanf("%d", &vetor[i]);
    for (i = 19; i>= 0; i--)
        printf(" %d", vetor[i]);
    putchar('\n');
}