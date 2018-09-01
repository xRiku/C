/* 2.  Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repeticao for, a segunda
while, e a terceira do while */
#include <stdio.h>

int main ()
{
    int i;
    puts("Usando for:");
    for (i=1; i<=100; i++) {
        printf("%d\n", i);
    }
    puts("--------------------");
    puts("Usando while:");
    i = 1;
    while (i<=100){
        printf("%d\n", i);
        i++;
    }
    i = 1;
    puts("Usando do while:")
    puts("--------------------");
    do {
        printf("%d\n", i);
        i++;
    }
    while (i<=100);
}
