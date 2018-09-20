/* 15. Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
mentos repetidos. */

#include <stdio.h>
void estrelas(int a){
    int i;
    for (i = 0; i <= a; i++)
        putchar('*');
    putchar('\n');
}

int main (){
    int vetor[5], i, x;
    for (i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        if (i != 0){
            for (x = i - 1; x >= 0; x--){
                while(vetor[i] == vetor[x]){
                    printf("Valor repetido\nDigite outro numero: ");
                    scanf("%d", &vetor[i]);
                }
            }
        }
    }
    estrelas(15);
    for (i = 0; i < 5; i++)
        printf("%d\n", vetor[i]);
}