/* 5) Distribuir itens para um grupo de pessoas, e exibir quem foi a última pessoa a receber um
item. Assuma que a distribuição é feita da seguinte forma: a pessoa 1 recebe um item, depois a 
pessoa 2 recebe um item, e assim por diante até a pessoa n. Se ainda sobrarem itens disponíveis,
o processo de distribuição recomeça da pessoa 1. */

#include <stdio.h>

int main ()
{
    int pessoas, itens, divisao;
    printf("Digite aqui o numero de pessoas: ");
    scanf("%d", &pessoas);
    printf("Digite aqui o numero de itens a serem distribuidos: ");
    scanf("%d", &itens);
    if (itens>pessoas){
        divisao = itens%pessoas;
        if (divisao == 0)
            divisao = pessoas;
        printf("A ultima pessoa a receber o item foi a de numero %d.\n", divisao);
    }
    if (itens == pessoas)
        printf("A ultima pessoa a receber o item foi a de numero %d.\n", pessoas);
    if (itens < pessoas) 
        printf("A ultima pessoa a receber o item foi a de numero %d.\n", itens);

}