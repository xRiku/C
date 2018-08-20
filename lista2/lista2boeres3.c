/* 3) Dizer qual mês do ano é correspondente a um número entre 1 e 12.
Resolva esse problema usando o comando switch. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero;
    printf("Digite aqui seu numero: ");
    scanf("%d", &numero); 
    switch (numero)
    {
        case 1: printf("O numero corresponde ao mes de Janeiro.\n");
                break;
        case 2: printf("O numero corresponde ao mes de Fevereiro.\n");
                break;
        case 3: printf("O numero corresponde ao mes de Marco.\n");
                break;
        case 4: printf("O numero corresponde ao mes de Abril.\n");
                break;
        case 5: printf("O numero corresponde ao mes de Maio.\n");
                break;
        case 6: printf("O numero corresponde ao mes de Junho.\n");
                break;
        case 7: printf("O numero corresponde ao mes de Julho.\n");
                break;
        case 8: printf("O numero corresponde ao mes de Agosto.\n");
                break;
        case 9: printf("O numero corresponde ao mes de Setembro.\n");
                break;
        case 10: printf("O numero corresponde ao mes de Outubro.\n");
                break;
        case 11: printf("O numero corresponde ao mes de Novembro.\n");
                break;
        case 12: printf("O numero corresponde ao mes de Dezembro.\n");
                break;

    }



}