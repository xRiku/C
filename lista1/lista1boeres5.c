//e) Verificar e exibir o maior entre dois números inteiros.

#include <stdio.h> 

int main ()
{
    int A, B;
    printf("Digite aqui o primeiro numero: ", A);
    scanf("%d", &A);
    printf("Digite aqui o segundo numero: ", B);
    scanf ("%d", &B);
    if (A>=B)
        printf("O maior numero: %d", A);
    else 
        printf("O maior numero: %d", B);    


}