
#include <stdio.h>

int main ()
{
    int n, i = 2, x = 0, y, expoente = 0;
    printf("Digite aqui o valor de n: ");
    scanf("%d", &n);
    while (i <= n){
        y = i;
        while (y >= 1) {
            if (i % y == 0)
                x++;
            if (y == 1) {
                if (x == 2) {
                    while (n % i == 0) {
                    n = n / i;
                    expoente++;
                    }
                    if (expoente >= 1) {
                    printf("Numero primo: %2d  expoente: %2d\n", i, expoente);
                    expoente = 0;
                    }
                }
            }
            y--;
        }
        x = 0;
        i++;
    }


}