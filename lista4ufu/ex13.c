/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
tram o maior e o menor valor.*/
#include <stdio.h>

int main (){
    int vetor[5], i, maior, ima, menor, ime;
    for (i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        if (i == 0){
            maior = menor = vetor[i];
            ima = ime = i;
        }
        if (maior < vetor[i]){
            maior = vetor[i];
            ima = i;
        }
        if (menor > vetor[i]){
            menor = vetor[i];
            ime = i;
        }
    }
    printf("Menor valor: %d\tindice: %d\n", menor, ime);
    printf("Maior valor: %d\tindice: %d\n", maior, ima);
}