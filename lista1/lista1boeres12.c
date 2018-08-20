/* l) Faça um programa em que dada uma temperatura em Celsius ou Fahrenheit converta esta 
temperatura para a outra unidade. */

#include <stdio.h>

int main ()
{
    float temperatura, temperaturac, temperaturaf;
    char escala;
    printf("Digite aqui o valor da temperatura atual: ");
    scanf("%f", &temperatura);
    scanf(" %c", &escala);
    if (escala == 'F' || 'f') {
        temperaturac = (temperatura - 32) * 9 / 5;
        printf("Valor da Temperatura em Fahrenheit: %.1f ºF\n", temperatura);
        printf ("Esse e o valor da temperatura em Celsius: %.1f ºC\n", temperaturac);
    }
    if (escala == 'C' || 'c') {
        temperaturaf = (1.8 * temperatura) + 32;
        printf("Valor da temperatura em Celsius: %1.f ºC\n", temperatura);
        printf("Esse e o valor da temperatura em Fahrenheit: %.1f ºF\n", temperaturaf);
    }
    else {
        printf("Erro, escala nao registrada no sistema.");
    }
} 