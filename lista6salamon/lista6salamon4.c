

#include <stdio.h>

int main (){
    int vetor[10], vetor1[10], i, j;
    for (i = 0; i<10; i++)
        scanf("%d%d", &vetor[i], &vetor1[i]);
    printf("Interseccao entre os 2 vetores:");
    for (i = 0; i<10; i++)
        for (j = 0; j<10; j++)
            if (vetor[j] == vetor1[i])
                printf(" %d", vetor[j]);
    putchar('\n');

}