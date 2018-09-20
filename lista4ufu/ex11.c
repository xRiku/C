/*11. Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de numeros negativos e a soma dos numeros positivos desse vetor.*/
#include <stdio.h>

int main (){
    int vetor[10], i, x = 0, S = 0;
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0)
            x++;
        if (vetor[i] > 0)
            S = vetor[i] + S;
    }
    printf("Total de numeros negativos: %d\nSoma dos numeros positivos: %d\n", x, S);
}