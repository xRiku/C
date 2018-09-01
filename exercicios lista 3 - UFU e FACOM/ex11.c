
#include <stdio.h>

int main ()
{
    int i = 0, n;
    printf("Digite aqui o valor limite: ");
    scanf("%d", &n);
    if (n<0)
        return 0;
    while (i<=n){
        printf("%d\n", i);
        i++;
    }

}