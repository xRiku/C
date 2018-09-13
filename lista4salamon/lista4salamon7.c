
#include <stdio.h>
int htomin(int a, int b)
{
    return (a*60) + b;
}

int difmin(int a, int b, int a1, int b1)
{
    while (htomin(a1, b1) < htomin(a, b)){
        printf("Digite aqui novos valores para o segundo horario: \n");
        scanf("%d%d", &a1, &b1);
    }
    return htomin(a1, b1) - htomin(a, b);
}

int main ()
{
    int a, b, a1, b1;
    scanf("%d%d%d%d", &a, &b, &a1, &b1);
    printf("%d\n", difmin(a, b, a1, b1));
}