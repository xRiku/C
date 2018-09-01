

#include <stdio.h>

int main()
{
    int i, n;
    printf("Digite aqui o valor de um numero positivo e par: ");
    do {
        scanf("%d", &n);
        if (n>=0){
            if (n%2==0){
                i = n;
                while (i>=0){
                    if (i%2==0)
                        printf("%d\n", i);
                    i--;
                }
            }
            else    
                printf("Digite aqui um numero par.\n");
        }
        else 
            printf("Digite aqui um numero positivo.\n");
    }
    while (n%2!=0||n<0);


}