/* Escreva  um  programa  para  ler  o  saldo  inicial  de  uma  conta  bancária.  A  seguir  ler  um 
número  indeterminado  de  pares  de  valores  indicando  respectivamente  o  tipo  da 
operação (codificado da seguinte forma: 1 – depósito; 2 – retirada; 3 – fim) e o valor. 
Quando for informado para o tipo o código 3, o programa deve ser encerrado e impresso 
o   saldo   final   da   conta   com   as   seguintes   mensagens:   CONTA   ZERADA,   CONTA 
ESTOURADA (se o saldo for negativo) ou CONTA POSITIVA (se o saldo for positivo). */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float saldo, valor;
    int tipo, i = 1;
    printf("Digite aqui o saldo inicial da conta bancaria: ");
    scanf("%f", &saldo);
    while (i){
        printf("Digite a opcao do valor: ");
        while (1){
        scanf("%d", &tipo);
            if (tipo != 2 && tipo != 1) {
                if (tipo == 3){
                    i = 0;
                    break;
                }
                else {
                    printf("Opcao invalida.\n");
                    continue;
                }
            }
            else 
                break;
        }
        if (i == 0)
            break;
        printf("Valor: ");
        scanf("%f", &valor);
        valor = abs(valor);
        switch (tipo) {
            case 1: saldo = saldo + valor;
                    break;
            case 2: saldo = saldo - valor;
                    break;
        }
    }
    printf("SALDO ATUAL: \t%.2f\n", saldo);
    if (saldo > 0)
        printf("CONTA POSITIVA.\n");
    else {
        if (saldo == 0)
            printf("CONTA ZERADA.\n");
        else 
            printf("CONTA NEGATIVA.\n");
    }


}