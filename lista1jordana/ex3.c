/* Faça  um  algoritmo  que  leia  a  idade  de  um  atleta
e  escreva em  que  categoria  ele  se 
enquadra, seguindo o quadro abaixo: */

#include <stdio.h>

int main ()
{
    int idade;
    printf("Digite aqui a idade: ");
    scanf("%d", &idade);
    if (idade < 0)
        printf("***** ERRO *****\n IDADE INVALIDA");
    else {
        if (idade < 5)
            printf("O INDIVIDUO NAO TEM IDADE PARA JOGAR.\n");
        else {
            if (idade < 11)
                printf("O INDIVIDUO SE ENCONTRA NA CATEGORIA INFANTIL.\n");
            else {
                if (idade < 19)
                    printf("O INDIVIDUO SE ENCONTRA NA CATEGORIA JUVENIL.\n");
                else {
                    if (idade <= 30)
                        printf("O INDIVDUO SE ENCONTRA NA CATEGORIA PROFISSIONAL.\n");
                    else 
                        printf("O INDIVIDUO SE ENCONTRA NA CATEGORIA SENIOR.\n");
                }
            }
        }
    }
}           