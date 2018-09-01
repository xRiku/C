

#include <stdio.h>

int main ()
{
    int i, x = 0, y = 0;
    printf("Digite o valor do algarismo: \n");
    do {
        scanf("%d", &i);
        if (i == 1000)
            break;
        if (i%2==0){
            printf("E par\n");
            x++;
        }
        else
            printf("Nao e par\n");
        y++;
    }
    while (i!=1000);
    printf("Total de numeros lidos: %d\n", y);
    printf("Total de pares lidos: %d\n", x);
}