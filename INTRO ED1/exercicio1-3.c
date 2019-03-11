// Exercicio 1.3 introdução a estrutura de dados Celes Cerqueira Rangel
#include <stdio.h>

int fibonacci (int n){
    int i, t1, t2, S;
    t1 = 1;
    t2 = 1;
    S = 0;
    if (n == 1 || n == 2){
        return 1;
    }
    for (i = 3; i <= n; i++){
        S = t1 + t2;
        // printf("SOMA: %d\n", S);
        t1 = t2;
        // printf("t1: %d\n", t1);
        t2 = S;
        // printf("t2: %d\n", t2);
    }
    return S;
}
int main(){ 
    int n;
    printf("******** N TERMO NA SEQUENCIA FIBONACCI ********\n");
    printf("Digite aqui um numero: ");
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
}