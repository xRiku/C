
#include <stdio.h>

int main ()
{
    int i = 1, x, y = 0, z = 0;
    printf("Maior e menor numero de 10 numeros de sua escolha: \n");
    while (i<=10){
        scanf("%d", &x);
        if (i == 1) {
            y = z = x;
        }
        if (x < y)
            y = x;
        if (x > z)
            z = x;
        i++;
    }
    printf("O maior numero e: %d\n", z);
    printf("O menor numero e: %d\n", y);

}