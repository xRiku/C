
#include <stdio.h>

int main ()
{
    int i = 0, x, y, z, b = 0, c = 0, n;
    printf("DIGITE AQUI UM VALOR DE TERMOS A SEREM AVALIADOS: ");
    while (1) {
        if (i == n) 
            break;
        scanf("%d", &n);
        if (n > 0){
            while (i < n){
                scanf("%d", &x);
                if (i == 0){ 
                    y = x;
                    z = x;
                }
                if (x == z)
                    c = c + 1;
                if (x == y)
                    b = b + 1;
                if (x < y) {
                    y = x;
                    b = 1;
                }
                printf("valor de b: %d\n", b);
                if (x > z) { 
                    z = x;
                    c = 1;
                }
                printf("valor de c: %d\n", c);
                i++;
            }
        }
        else 
            printf("VALOR INVALIDO.\n");
    }
    printf("O maior numero: %d\n", z);
    printf("Numero de vezes inserido: %d\n", c);
    printf("O menor numero:: %d\n", y);
    printf("Numero de vezes inserido: %d\n", b);
}