// 11. 

#include <stdio.h>


int main ()
{
    int n, m, a, b, c, d;
    printf("Digite aqui os limites do intervalo entre 1000 e 9999: ");
    scanf("%d%d", &n, &m);
    if (n>999&&m<10000) {
        if (n>m)
            printf("VALOR INVALIDO.\nO PRIMEIRO LIMITE DEVE SER MENOR QUE O SEGUNDO.\n");
        else {
            if (m==n) {
                printf("NAO EXISTE INTERVALO.\n");
                b = n/100;
                c = n%100;
                d = b + c;
                a = d * d;
                if (a == n)
                    printf("POREM O NUMERO %d SATISFAZ A CONDICAO.\n", n);
            }
            else {
                n = n + 1;
                while (n<m){
                    b = n/100;
                    c = n%100;
                    d = b + c;
                    a = d * d;
                        if (a == n)
                            printf("O numero %d, satisfaz a condicao.\n", n);
                    n = n + 1;
                }
            }
        }
    }
    else 
        printf("LIMITE INVALIDO.\nO LIMITE DEVE ESTAR ENTRE 1000 e 9999.\n");
}