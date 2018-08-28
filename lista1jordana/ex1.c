/* Escreva  um  algoritmo  que  leia  o  número  de  litros  vendidos,  o  tipo  de  combustível 
(codificado da seguinte forma: 1 
–
álcool; 2 
–
gasolina), calcule e imprima o 
valor a ser 
pago pelo cliente, sabendo que o preço da gasolina é de R$ 3,15 e o litro do álcool é
de R$ 2,83.
*/

#include <stdio.h>

int main ()
{   
    float litro, gasolina, alcool;
    printf("Digite aqui o valor a ser consultado: ");
    scanf("%f", &litro);
    gasolina = litro / 3.15;
    alcool = litro / 2.83;
    printf("Litros em Gasolina: \t%.2f\nLitros em alcool: \t%.2f\n", gasolina, alcool);



}