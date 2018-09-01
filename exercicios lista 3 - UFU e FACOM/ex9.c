
#include <stdio.h>

int main ()
{
    int i = 0, n, x = 0;
    printf("Digite aqui o valor do numero de algarismos impares naturais: ");
    scanf("%d", &n);
    while (1){
        if (i%2!=0){
            printf("%d\n", i);
            x++;
        }
        if (x==n)
            break;
        i++;

    }

}