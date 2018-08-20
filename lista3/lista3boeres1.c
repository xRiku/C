/* 1. Desenvolva um programa para exibir todos os números pares
contidos em um determinado intervalo */

#include <stdio.h>

int main ()
{
    int A, B, i;
    printf("***** Existe par no intervalo? *****\n\n");
    printf("Defina aqui seu intervalo aberto: ");
    scanf("%d%d", &A, &B);
    if (A<B) {
        if ((B-A)==1)
            printf("\t----- INTERVALO MUITO PEQUENO -----\n");
        else {
            i = A+1;
            printf("Todos os numeros pares: \n");
            while (i<B){
                if (i%2==0)
                    printf("%2d\n", i);
                i = i + 1;    
            }
            printf("\t***** FIM DA LISTA *****\n");
        }    
    }     
    else {
        if (A==B)
            printf("\t----- NAO EXISTE INTERVALO -----\n");
        else {
            printf("\t----- ERRO -----\n");
            printf("\t----- B deve ser maior que A ------\n");
        }
    }    

}