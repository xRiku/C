
#include <stdio.h>

int main ()
{
    int i = 0, n;
    printf("Digite aqui o valor de n: ");
    scanf("%d", &n);
    while (i!=n){
        if (n >= 0){
            if (n%2==0){
                printf("Sequencia:\n");
                while (i<=n){
                    if (i%2==0)
                        printf("%d\n", i);
                    if (i==n)
                        break;
                    i++;
                }
            }
            else { 
                printf("Digite um valor par.\n");
                scanf("%d", &n);
            }
        }
        else {
            printf("Digite um valor positivo.\n");
            scanf("%d", &n);
        }
    }
}