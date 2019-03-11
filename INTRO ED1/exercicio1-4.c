// Exercicio 1.4 introdução a estrutura de dados Celes Cerqueira Rangel
#include <stdio.h>

int soma_impares (int n){
    int i = 0, soma = 0, x = 0;
    while (1){
        if (i % 2 == 1){
            soma = i + soma;
            x++;
        }
        i++;
        if (x == n){
            return soma;
        }
    }
}
int main (){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d\n", soma_impares(n));
}