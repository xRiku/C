// Exercicio 1.2 introdução a estrutura de dados Celes Cerqueira Rangel
#include <stdio.h>

int primo (int n){
    int i, x = 0;
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            x++;
        }
    }
    if (x == 2){
        return 1;
    }
    else 
        return 0;
}
int main (){
    int n;
    printf("Digite aqui um numero qualquer: ");
    scanf("%d", &n);
    printf("%d\n", primo(n));
}