/*4. Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .*/

#include <stdio.h>

int main (){
    int vetor[8], i, X, Y;
    printf("Digite aqui 8 valores para as 8 posicoes do vetor:\n");
    for (i = 0; i < 8; i++)
        scanf("%d", &vetor[i]);
    printf("Digite aqui 2 valores correspondentes a posicoes no vetor:\n");
    do {
        scanf("%d%d", &X, &Y);
    }
    while (!((X < 8 && X >= 0) && ( Y < 8 && Y >= 0)));
    printf("Soma dos valores nas posicoes selecionadas: %d\n", vetor[X] + vetor[Y]);

}