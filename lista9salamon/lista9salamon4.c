/* Faça um programa para ler uma quantidade N do teclado, assim como N números inteiros e
armazená-los em um vetor A. Ao final, verifique se os itens (inteiros) de A formam uma
progressão aritmética. Imprima a razão se for uma progressão aritmética, ou “NAO” caso
contrário.
Entrada: um número inteiro N representando uma quantidade de números, seguido de N
números inteiros, todos separados por espaço.
Saída: Imprima a razão se for uma progressão aritmética, ou “NAO” caso contrário.*/

#include <stdio.h>
#include <stdlib.h>

int razao4all(int *a, int b, int r){
    int i;
    for (i = 2; i < b; i++){
        if ( a[i] - a [i-1] != r){
            return 0;
        }
    }
    return 1;
}

int main (){
    int n, i;
    printf("Digite aqui o tamanho do vetor: ");
    do{
        scanf("%d", &n);
    }
    while(n < 1);
    int *vetor = malloc (sizeof(int)*n), razao;
    printf("Vetor:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    if (n < 2){
        printf("NAO\n");
        free(vetor);
        return 0;
    }
    razao = vetor[1] - vetor[0];
    if(razao4all(vetor, n, razao)){
        printf("%d\n", razao);
    }
    else
        printf("NAO\n");
    free(vetor);
    return 0;

}