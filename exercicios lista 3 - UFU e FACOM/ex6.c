
#include <stdio.h>

int main ()
{
    float i = 0, x, S;
    printf("Media de 10 valores de sua escolha: ");
    while (i<10){
        scanf("%f", &x);
        S = x + S;
        i++;
    }
    printf("A media final e: %.2f\n", S/i);

}
