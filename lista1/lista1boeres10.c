//j) Faça um programa para ler 2 números inteiros e calcular a soma de suas raízes quadradas. 

#include <stdio.h> 
#include <math.h>

int main ()
{
    int A, B, soma_raizes;
    printf("Digite aqui o primeiro numero: ");
    scanf("%d", &A);
    printf("Digite aqui o segundo numero: ");
    scanf(" %d", &B);
    A = pow (A, 0.5);
    B = pow (B, 0.5);
    soma_raizes = A + B;
    printf("Soma de duas raizes quadradas: %.2f\n", (float) soma_raizes); 


}
