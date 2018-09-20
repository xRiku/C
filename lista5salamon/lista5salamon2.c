/* 2. Escreva uma função recursiva para calcular a soma dos 
n primeiros números inteiros, onde n será lido do teclado.*/

#include <stdio.h>
int nsoma(int n){
    if (n == 0)
        return 0;
    return n + nsoma(n-1);
}
int main (){
    int n;
    printf("Digite aqui o numero do termo pra finalizar a soma: ");
    scanf("%d", &n);
    printf("%d\n", nsoma(n));
}