/* 1. Faca um programa que determine e mostre os cinco primeiros multiplos de 3,
considerando numeros maiores que 0. */

#include <stdio.h>

int main ()
{ 
    int i = 1, x = 0;
    printf("MULTIPLOS DE 3: \n");
    while (1) {
        if (i % 3 == 0) {
            printf("%d\n", i);
            x = x + 1;
        }
        if (x == 5)
            break;
        i++;
    }

}