//h) Calcular e exibir a área de um círculo de raio r, dado r como entrada.

#include <stdio.h>
#define PI 3.1415926

int main ()
{
    float r, area;
    scanf("%f", &r);
    area = r * r * PI;
    printf("This is the Area of a previously said radius circumference: %f", area);



}