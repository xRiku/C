/* 4)Escreva um programa para ler dois valore inteiros e imprimir o resultado da divisão do 
primeiro  pelo  segundo.  Se  o  segundo  valor  informado  for  ZERO,  deve  ser  impressa  a 
mensagem  VALOR  INVÁLIDO  e  lido  um  novo  valor.  Ao  final  do  programa  deve  ser 
impressa a seguinte mensagem: DESEJA REALIZAR OUTRO CÁLCULO (S/N)?
Se  a  resposta  for  S  o  programa  deverá  retornar  ao  começo,  caso  contrário  deverá 
encerrar a sua execução imprimindo quantos cálculos foram feitos. */


#include <stdio.h>


int main ()
{
    int A, B;
    char resposta;
    printf("***** DIVIDIR A POR B *****\n");
    do {
        printf("Digite aqui o primeiro valor de A: ");
        scanf("%d", &A);
        while (1){
        printf("Digite aqui o valor de B: ");
        scanf("%d", &B);
        if (B != 0)
            break;
        else 
            printf("VALOR INVALIDO.\n");
        }
        printf("DESEJA REALIZAR OUTRO CÁLCULO (S/N)?\n");
        while (1) {
            scanf(" %c", &resposta);
            if (resposta == 'S' || resposta == 'N')
                break;
            else 
                printf("RESPOSTA INVALIDA.\n");
        }
    printf("RESULTADO DA OPERACAO:\n%d\n", A/B);
    }
    while ( resposta == 'S');
}