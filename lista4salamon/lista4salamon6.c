

#include <stdio.h>

int htomin(int a, int b)
{
    return (a*60) + b;
}
int main ()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", htomin(a,b));


}