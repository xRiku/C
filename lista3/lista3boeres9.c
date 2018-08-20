/* Faça um programa que imprima os números primos contidos em
um intervalo de extremos n e m, sendo n e m fornecidos pelo
usuário. */ 

#include <stdio.h>


int main ()
{
    int a, b = 0, n, m, i, x = 0;
    printf("Digite aqui os limites do intervalo aberto: ");
    scanf("%d%d", &n, &m);
    if (n <= m )
        if (m == n)
            printf("NAO EXISTE INTERVALO.\n");
        else {
            if (m - n == 1)
                printf("O INTERVALO E MUITO PEQUENO.\n");
            else
                n = n + 1; 
                printf("NUMERO(S) PRIMO(S):\n");
                while (n<m){
                    i = n;
                    while (i>=(-n)) {
                        if (n%i==0)
                            x = 1 + x;
                        if (i == 1)
                            i = i - 2;
                        else 
                            i = i - 1;
                    }
                    if (x == 4){
                        printf("\t%2d\n", n);
                        b = 1 + b;
                    }
                    x = 0;
                    n = n + 1;
                }
                if (b == 0)
                    printf("***** NAO EXISTE NUMERO PRIMO NO INTERVALO DADO *****\n");
        }
    else 
        printf("O VALOR DO PRIMEIRO LIMITE DEVE SER MENOR QUE O VALOR DO SEGUNDO.\n");

}