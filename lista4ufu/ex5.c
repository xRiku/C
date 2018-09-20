//5. Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.
#include <stdio.h>

int main (){
    int vetor[10], i, x = 0;
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i]%2 == 0)
            x++;
    }
    printf("O vetor possui %d numeros pares.\n", x);
}