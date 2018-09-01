
#include <stdio.h>

int main ()
{
    int i = 1, x, S = 0;
    printf("Soma de 10 valores de sua escolha: ");
    while (i<=10){
        scanf("%d", &x);
        i++;
        S = x + S;
    }
    printf("Soma total: %d\n", S);


}