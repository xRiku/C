/*8. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.*/

#include <stdio.h> 

int main (){
    int vetor[6], i;
    for (i = 0; i < 6; i++)
        scanf("%d", &vetor[i]);
    for (i = 5; i >= 0; i--)
    printf("%d\n", vetor[i]);
}