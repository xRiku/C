
#include <stdio.h>

int main ()
{
    int i, n;
    printf("Digite aqui o valor do limite positivo: ");
    scanf("%d", &n);
    if (n<0){
        printf("Entrada invalida.\nDigite algum numero positivo.\n");
        return 0;
    }
    for (i=n; i>=0; i--){
        printf("%d\n", i);
        }
}
