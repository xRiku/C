#include <stdio.h>

int main()
{
    int i, n;
    printf("Digite aqui o valor de um numero positivo e impar: ");
    do {
        scanf("%d", &n);
        if (n>=0){
            if (n%2==1){
                i = n;
                printf("ORDEM DECRESCENTE:\n");
                while (i>=0){
                    if (i%2==1)
                        printf("%d\n", i);
                    i--;
                }
            }
            else    
                printf("Digite aqui um numero impar.\n");
        }
        else 
            printf("Digite aqui um numero positivo.\n");
    }
    while (n%2!=1||n<0);


}