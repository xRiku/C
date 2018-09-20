#include <stdio.h>

int main (){
    int i;
    float vetor[10], S = 0, x = 0;
    printf("Digite aqui as notas dos alunos: ");
    for (i = 0; i<10; i++){
        scanf("%f", &vetor[i]);
        S = vetor[i] + S;
    }
    printf("Media: %.2f\n", S/10);
    printf("Notas maiores que a media:");
    for (i = 0; i<10; i++) {
        if (vetor[i] > S/10){
            printf(" %.2f", vetor[i]);
            x++;
        }
    }
    if (x == 0)
        printf("Ninguem tirou a cima da media.\n");
}