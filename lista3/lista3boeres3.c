// 3.Obter o MDC entre dois números inteiros.

#include <stdio.h>

int main ()
{
    int n, m, i;
    printf("Digite aqui os valores dos dois numeros: ");
    scanf("%d%d", &n, &m);
    if (n<m){
        i = n;
        while (i>0){
            if (n%i==0&&m%i==0){
                printf("O MDC e: %d\n", i);
                break;   
            }
            i = i - 1;
        }
        printf("***** FIM DA EXECUCAO *****\n");
    }
    else 
        printf("ERRO, o segundo numero deve ser maior que o primeiro.\n");

}