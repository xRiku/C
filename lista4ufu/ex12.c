/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.*/
#include <stdio.h>

int main (){
    int vetor[5], i, maior, menor;
    for (i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        if (i == 0)
            maior = menor = vetor[i];
        if (maior < vetor[i])
            maior = vetor[i];
        if (menor > vetor[i])
            menor = vetor[i];
    }
    printf("Valores lidos:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", vetor[i]);
    printf("\nMaior valor:\t%d\nMenor valor:\t%d\n", maior, menor);
    printf("Media:\t\t%.2f\n", (float) (maior + menor)/2);
}