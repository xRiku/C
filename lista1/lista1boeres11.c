/* k) Construa um programa para calcular a área de um círculo e o raio de um círculo com metade 
desta área. Utilize o valor de Π = 3.141592. */

#include <stdio.h> 
#include <math.h>
#define PI 3.141592
int main()
{
    float area, raio, raio2;
    printf("Digite aqui o valor do raio: ");
    scanf ("%f", &raio);
    area = PI * raio * raio;
    printf ("O valor da area com dado raio e: %.2f\n", area);
    raio2 = pow((area/(2*PI)), 0.5);
    printf ("O valor do raio com metade da primeira area e: %.2f\n", raio2); 



}