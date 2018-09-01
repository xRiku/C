
#include <stdio.h>

int main ()
{
    float i = 1, x, y = 0, S = 0;
    printf("Media de ate 10 valores positivos de sua escolha: ");
    while (i<=10){
        scanf("%f", &x);
        if (x > 0){
            S = x + S;
            y++;
        }
        i++;

    }
    printf("Media final: %.2f\n", S/y);


}