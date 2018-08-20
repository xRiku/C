//1) Calcular e exibir o perímetro de um retângulo.
#include <stdio.h>

int main ()
{ 
  float X, Y, X1, Y1, perimetro;
  printf("Digite aqui as coordenadas do ponto inferior esquerdo: ");
  scanf("%f", &X);
  scanf("%f", &Y);
  printf("Digite aqui as coordenadas do ponto superior direito: ");
  scanf("%f", &X1);
  scanf("%f", &Y1);
  perimetro = 2 * (X1 - X) + 2 * (Y1 - Y);
  printf("O perimetro do retangulo dado suas extremidades e: %.2f\n", perimetro);
  printf("Coordenadas do segundo ponto: (%.2f,%.2f)\n", X1, Y1);
  printf("Coordenadas do primeiro ponto: (%.2f,%.2f)\n", X, Y);



}