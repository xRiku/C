/*14. Fac¸a um programa que leia um vetor de 10 posic¸oes e verifique se existem valores iguais ˜
e os escreva na tela.*/

#include <stdio.h>

int main (){
    int vetor[10], i, x;
    for (i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);
    printf("Valores iguais:\n");
    for (i = 0; i < 10; i++){
        for (x = 1; x  < 10; x++)
            if (vetor[i] == vetor[i + x])
                    printf("%d ", vetor[i]);
    }
    putchar('\n');
}