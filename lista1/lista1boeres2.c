//b) Informar os valores do seno, do cosseno e da tangente de um ângulo,
// dado o seu valor em graus.
#include <stdio.h>
#include <math.h>

#define PI 3.1415926
int main ()
{
    double tan, angulo, radson;
    scanf("%lf", &angulo);
    radson =  (angulo * 2 * PI)/360;
    tan = sin(radson) / cos (radson);
    printf("Seno: %lf\nCosseno%lf\nTangente:%lf\n", sin(radson), cos(radson), tan);

}