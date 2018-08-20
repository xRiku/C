//10. Faça um programa que imprima na tela as tabuadas de n até m.

#include <stdio.h>

int main ()
{
    int n, m, i = 1, a;
    printf("Digite aqui o intervalo fechado de tabuadas desejada: ");
    scanf("%d%d", &n, &m);
    if (n>m)
        printf("O PRIMEIRO NUMERO DEVE SER MENOR QUE O SEGUNDO.\n");
    else 
        if (n == m) {
            printf("TABUADA DO %d\n", n);
            while (i<=10){
                a = i * n;
                printf("%2d  x  %2d  =  %2d\n", n, i, a);
                i = i + 1;
            }
        }
        else
            while (n<=m){
                while (i<=10) {
                    a = i * n;
                    printf("%d  x  %2d  =  %2d\n", n, i, a);
                    i = i + 1;
                }
            putchar('\n');
            i = 1;
            n = n + 1;    
            } 

}