/*8)Faça um  programa  que  apresente  um  menu  de opções para  o  cálculo  das  seguintes
operações entre dois números: Adição (opção 1) subtração (opção 2) multiplicação (opção3)
divisão (opção4) saída (opção5). O programa deve possibilitar ao usuário a escolha da operação 
desejada, a exibição do resultado e a volta ao menu de opções. O programa só termina 
quando for escolhida a opção de saída (opção 5)*/


#include <stdio.h>

int main ()
{
    int i = 1, n;
    float a, b, operacao;
    while (i) {
        puts("********** MENU **********");
        puts("ADICAO\t\t-----\t1");
        puts("SUBTRACAO\t-----\t2");
        puts("MULTIPLICACAO\t-----\t3");
        puts("DIVISAO\t\t-----\t4");
        printf("SAIDA\t\t-----\t5\n");
        while (i) {
            scanf("%d", &n);
            if (n > 4 || n < 1) {
                if (n == 5) {
                    i = 0;
                    break;
                }
                else 
                    printf("OPCAO INVALIDA.\n");
            }
            else
                break;
        }
        if (i == 0)
            break;
        printf("Digite aqui os valores a serem operados: ");
        scanf("%f%f", &a, &b);
        while (1){
            if (n == 4 && b == 0){
                printf("Digite um novo valor para b: ");
                scanf("%f", &b);
                continue;
            }
            else    
                break;
        }
        switch (n){
            case 1: operacao = a + b;
                    break;
            case 2: operacao = a - b;
                    break;
            case 3: operacao = a * b;
                    break;
            case 4: operacao = a / b;
                    break;
        }
        printf("RESULTADO: %.2f\n", operacao);
    }


}