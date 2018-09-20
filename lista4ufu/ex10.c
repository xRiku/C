/*10. Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/

#include <stdio.h>

int main (){
    int vetor[15], i, S = 0, x = 0;
    printf("Digite aqui as notas dos 15 alunos:\n");
    for (i = 0; i < 15; i++){
        do
            scanf("%d", &vetor[i]);
        while (vetor[i] < 0 || vetor[i] > 10);
        x++;
        S = vetor[i] + S;
    }
    printf("Media das notas: %.2f\n", (float) S/x);
}