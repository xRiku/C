//4) Dados três números inteiros, exibi-los em ordem crescente.

#include <stdio.h>

int main ()
{
    int A, B, C;
    printf("Digite aqui os valores A, B, C, respectivamente: ");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if (A<=B&&A<=C)
    {   
        if (B<C)
            printf("Ordem crescente: %d, %d, %d.\n", A, B, C);
        else 
            printf("Ordem crescente: %d, %d, %d.\n", A, C, B);
        
    }
    if (B<A&&B<C)
    {
        if (A<C)
            printf("Ordem crescente: %d, %d, %d.\n", B, A, C);
        else 
            printf("Ordem crescente: %d, %d, %d.\n", B, C, A);
    }
    if (C<A&&C<B)
    {
        if (A<B)
            printf("Ordem crescente: %d, %d, %d.\n", C, A, B);
        else
            printf("Ordem crescente: %d, %d, %d.\n", C, B, A);
    }

}