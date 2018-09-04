/* 6)Ler um número indeterminado de pares de valores. Cada par representa a idade de um 
aluno e sua respectiva nota. Calcular e escrever:
A idade do aluno que obteve a maior nota. A nota do aluno mais velho.
Obs.:  o  algoritmo  será  encerrado  imediatamente  após  o  usuário  fornecer  uma  nota 
negativa (sem fornecer a respectiva nota). */


#include <stdio.h>


int main ()
{
    int idade_maior, idade, i = 1;
    float nota, maior;
    while (i){
        printf("Digite aqui a nota: ");
        scanf("%f", &nota);
        if (i == 1)
            maior = nota;
        if (nota >= maior){
            maior = nota;
            idade_maior = idade;
        }
        if (nota < 0)
            break;
        printf("Digite aqui a idade do aluno: ");
        scanf("%d", &idade);
        i++;


    }
    if (i==2)
        idade_maior = idade;
    printf("Maior nota: \t%.2f\n", maior);
    printf("Idade do aluno: %d\n", idade_maior);



}