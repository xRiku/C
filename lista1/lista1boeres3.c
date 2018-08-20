//c) Converter valores de temperatura de Fahrenheit para Celsius.
#include <stdio.h>


int main ()
{
    float F, C;
    scanf ("%f", &F);
    C = (F - 32) * 5 / 9;
    printf("Convertendo a Temperatura de Fahrenheit para Celsius temos:\n");
    printf("%f >>>>>>>>>>>>>>> %f\n", F, C);


}