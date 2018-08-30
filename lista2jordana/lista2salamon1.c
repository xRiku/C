/* 1)Faça  um  programa  para  ler  a  altura  e  a  largura  de  um  retângulo  e  calcular  o  seu 
perímetro. Em seguida, faça a mesma coisa, só que recebendo como dados de entrada 
as coordenadas (x, y) dos cantos inferior esquerdo e superior direito. */

#include <stdio.h>

int main ()
{
    float altura, largura, perimetro;
    printf("Digite aqui o valor da altura: ");
    scanf("%f", &altura);
    printf("Digite aqui o valor da largura: ");
    scanf("%f", &largura);
    perimetro =  2*altura + 2*largura;
    printf("O valor do perimetro e: %.2f\n", perimetro);
    printf("---------------------------------------\n");
    printf("Digite aqui os valores das coordenadas:\n");
    float X1, Y1, X2, Y2;
    scanf("%f%f", &X1, &Y1);
    printf("Coordenadas do lado inferior esquerdo: (%.2f, %.2f)\n", X1, Y1);
    scanf("%f%f", &X2, &Y2);
    printf("Coordenadas do lado superior direito: (%.2f, %.2f)\n", X2, Y2);
    perimetro = 2 * (X2 - X1) + 2 * (Y2 - Y1);
    printf("O valor do perimetro e: %.2f\n", perimetro);

}