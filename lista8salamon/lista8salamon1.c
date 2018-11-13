/*1) Crie um programa que:
(a) Aloque dinamicamente um array de N números inteiros;
(b) Peça para o usuário para digitar os N números no espaço alocado;
(c) Imprima na tela os N números;
(d) Libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

void main (){
    int n;
    printf("Digite aqui um numero: ");
    scanf("%d", &n);
    int *pN = malloc (sizeof(int) * n);
    // Alocando memoria para o ponteiro pN;
    for (int i = 0; i < n; i++){
        scanf("%d", pN + i);
    }
    for (int i = 0; i < n; i++){
        printf("%p -> %d\n", pN + i, *(pN + i));
    //Printando cada posição na memoria junto com seu valor;
    }
    free(pN);
    //Liberando espaço na memoria;

}