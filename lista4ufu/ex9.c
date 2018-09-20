/*9. Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
lidos na ordem inversa.*/

#include <stdio.h> 

int main (){
    int vetor[6], i;
    for (i = 0; i < 6; i++){
        do{
            scanf("%d", &vetor[i]);
        }
        while(vetor[i]%2 == 0);
    }
    for (i = 5; i >= 0; i--)
    printf("%d\n", vetor[i]);
}