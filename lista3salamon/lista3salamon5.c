/* 5)Ler  um  conjunto  de  10  pares  de  dados,  cada  um,  com  a  altura  e  um  código  para 
masculino (1) e outro para feminino (2) de uma turma de alunos. Calcular e escrever
a)A maior e a menor altura da turma.
b)A média da altura das mulheres.
c)A média da altura dos homens */

#include <stdio.h>


int main ()
{
    int i, sexo, x = 1, contador1 = 0, contador2 = 0;
    float altura, M = 0, F = 0, menor, maior;
    for (i = 1; i <= 10; i++){
        printf("Altura do individuo: ");
        scanf("%f", &altura);
        if (i == 1)
            maior = menor = altura;
        if (altura > maior)
            maior = altura;
        if (altura < menor)
            menor = altura;
        printf("SEXO:\n1 - Masculino\n2 - Feminino\n");
        while (x) {
            scanf(" %d", &sexo);
            switch (sexo){
                case 1: 
                    M = altura + M;
                    contador1++;
                    x = 0;
                    break;
                case 2:
                    F = altura + F;
                    contador2++;
                    x = 0;
                    break;
                default:
                    printf("Opcao invalida.\n");
            }
        }
        x = 1;
        printf("F: %.2f\ncontador2: %d\n", F, contador2);
        printf("M: %.2f\ncontador1: %d\n", M, contador1);
    }
    printf("a)A maior altura da turma: \t%.2f\nA menor altura da turma: \t%.2f\n", maior, menor);
    printf("b)Media das alturas das mulheres: \t%.2f\n", M/contador2);
    printf("c)Media das alturas dos homens: \t%.2f\n", F/contador1);

}