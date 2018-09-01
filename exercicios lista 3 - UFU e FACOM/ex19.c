#include <stdio.h>

int main ()
{
    int i;
    printf("Digite o valor do algarismo: ");
    while (1) {
        scanf("%d", &i);
        if (i>=100 && i <= 999){
            printf("%d\n", i/100);
            printf("%d\n", i/10 - (i/100)*10);
            printf("%d\n", i%10);
            break;
        }
        else
            printf("VALOR INVALIDO.\n");
    }
}