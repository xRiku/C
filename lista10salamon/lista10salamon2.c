/*2) Crie uma estrutura representando os alunos do curso de Programação II. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 7.0 para
aprovação*/

#include <stdio.h>
#include <stdlib.h>
struct aluno{
    int matricula;
    char nome[100];
    float p1;
    float p2;
    float p3;
};
char* maiorp1(struct aluno vetor[], int n){
    float maior;
    int j;
    for(int i = 0; i < n; i++){
        if (i == 0){
          maior = vetor[i].p1;
          j = i;
        }
        if(maior < vetor[i].p1){
            maior = vetor[i].p1;
            j = i;
        }
    }
    return vetor[j].nome;
}
int maiormedia(float media[], int n){
    float maior;
    int j, i;
    for (i = 0; i < n; i++){
        if (i == 0){
            j = i;
            maior = media[i];
        }
        if (maior < media[i]){
        j = i;
        maior = media[i];
        }
    }
    return j;
}
char* media(struct aluno vetor[], int n){
    float soma, mediaM[n];
    int j;
    for(int i = 0; i < n; i++){
        mediaM[i] = (vetor[i].p1 + vetor[i].p2 + vetor[i].p3)/3;
    }
    j = maiormedia(mediaM, n);
    return (vetor[j].nome);
}
int menormedia(float media[], int n){
    float menor;
    int i, j;
    for (i = 0; i < n; i++){
        if (i == 0){
            j = i;
            menor = media[i];
        }
        if (menor > media[i]){
            j = i;
            menor = media[i];
        }
    }
    return j;
}
char* media2(struct aluno vetor[], int n){
    float soma, media2[n];
    int j;
    for(int i = 0; i < n; i++){
        media2[i] = (vetor[i].p1 + vetor[i].p2 + vetor[i].p3)/3;
    }
    j = menormedia(media2, n);
    return (vetor[j].nome);
}

int main (){
    int i;
    struct aluno *vetor = malloc(sizeof(struct aluno) * 5);
    float maior;
    for (i = 0; i < 5; i++){
        printf("Digite os dados do aluno %d:\n", i+1);
        printf("Matricula: ");
        scanf("%d", &vetor[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", vetor[i].nome);
        printf("Nota da p1: ");
        scanf("%f", &vetor[i].p1);
        printf("Nota da p2: ");
        scanf("%f", &vetor[i].p2);
        printf("Nota da p3: ");
        scanf("%f", &vetor[i].p3);
    }
    printf("A) Maior Nota p1: %s\n", maiorp1(vetor, 5));
    printf("B) Maior Media: %s\n", media(vetor, 5));
    printf("C) Menor Media: %s\n", media2(vetor, 5));
    for (i = 0; i < 5; i++){
        printf("%d\n", vetor[i].matricula);
        printf("%s\n", vetor[i].nome);
        printf("%.2f\n", vetor[i].p1);
        printf("%.2f\n", vetor[i].p2);
        printf("%.2f\n", vetor[i].p3);
        if ((vetor[i].p1 + vetor[i].p2 + vetor[i].p3) / 3 >= 7){
            printf("Aluno aprovado\n");
        }
        else {
            printf("Aluno reprovado\n");
        }
    }
    free(vetor);

}