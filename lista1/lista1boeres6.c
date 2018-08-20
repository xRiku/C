//f) Verificar e exibir o menor entre três números inteiros.

#include <stdio.h> 

int main () 
{
    int A, B, C;
    printf("type here your first number: ", A);
    scanf("%d", &A);
    printf("type here your second number: ", B);
    scanf("%d", &B);
    printf("And finally,\ntype here your third number: ", C);
    scanf("%d", &C);
    if (A<=B){
        if (A<=C) {
            printf("The lowest number is: %d\n", A);
        }
        else {
            printf("The lowest number is: %d\n", C);
        }
    }    
    else {
        if (B<=C) {
            printf("The lowest number is: %d\n", B);
        }
        else {
            printf("The lowest is: %d\n", C);
        }
    }
    

}