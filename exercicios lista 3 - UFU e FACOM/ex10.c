
#include <stdio.h>

int main ()
{
    int i = 1, x, S;
    printf("Soma dos 50 primeiros numeros pares: ");
    while (i<=50){
        if (i%2==0){
            printf("%d\n", i);
            S = i + S;
        }
        i++;
    }
    printf("Soma total: %d\n", S);

}