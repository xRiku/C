/*2) Calcular a média de duas notas e diga se o aluno está aprovado caso sua média seja maior ou 
igual a 7.0, reprovado caso a média seja menor que 5.0 ou de recuperação caso contrário.*/

#include <stdio.h>

int main ()
{
    float nota1, nota2, media;
    printf("Digite sua primeira nota aqui: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota aqui: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;
    if (media >= 7){
        printf("O aluno foi aprovado!\nMedia do aluno: %.1f\n", media);
    }
    else { 
        if (media >= 5)
                printf("O aluno esta de recuperacao\nMedia do aluno %.1f\n", media);
        else 
        printf("O aluno foi reprovado.\nMedia do aluno: %.1f\n", media);
    }

}