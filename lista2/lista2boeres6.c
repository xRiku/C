/* 6) Dizer se um ponto está contido em um retângulo, dados os cantos opostos do mesmo. Pontos
pertencentes às bordas do retângulo (na linha do retângulo) são considerados como pertencentes ao
retângulo. */

#include <stdio.h> 
#include <math.h>

int main ()
{
    float X, Y, X1, Y1, X2, Y2;
    printf("Digite aqui as coordenadas do primeiro ponto: ");
    scanf("%f%f", &X, &Y);
    printf("Coordenadas do ponto do primeiro canto: (%.2f,%.2f).\n", X, Y);
    scanf("%f%f", &X1, &Y1);
    printf("Coordenadas do ponto do canto oposto ao primeiro: (%.2f,%.2f).\n", X1, Y1);
    scanf("%f%f", &X2, &Y2);
    printf("Coordenadas do ponto introduzido no retangulo: (%.2f,%.2f).\n", X2, Y2);
    if (X<X1){
        if (Y<Y1) {
            if (X2 >= X && X2 <= X1) {
                if (Y2 >= Y && Y2 <= Y1)
                    printf("O ponto introduzido se encontra dentro do retangulo.\n");
                else 
                    printf("O ponto introduzido se encontra fora do retangulo.\n");
            } 
            else 
                printf("O ponto introduzido se encontra fora do retangulo.\n");
        }
        else {
            if (Y==Y1) {
                printf("Não foi formado um retangulo com os dois pontos introduzidos.\n");
                printf("Apenas um segmento de reta em Y = %.2f, e %.2f unidades em X.\n", Y, X1-X);
            }    
            else {
                if (X2 >= X && X2 <= X1) {
                    if (Y2 <= Y && Y2 >= Y1)
                        printf("O ponto introduzido se encontra dentro do retangulo.\n");
                    else 
                        printf("O ponto introduzido se encontra fora do retangulo.\n");
                }
                else
                    printf("O ponto introduzido se encontra fora do retangulo.\n");     
            }
        }
    }
    else {
        if (X==X1) {
        printf("Não foi formado um retangulo com os dois pontos introduzidos.\n");
        printf("Apenas um segmento de reta em X = %.2f, e %.2f unidades em Y ", X, fabs(Y-Y1));
        }
        else { 
            if (Y<Y1) {
                if (X2 <= X && X2 >= X1) {
                    if (Y2 >= Y && Y2 <= Y1)
                        printf("O ponto introduzido se encontra dentro do retangulo.\n");
                    else 
                        printf("O ponto introduzido se encontra fora do retangulo.\n");
                } 
                else 
                    printf("O ponto introduzido se encontra fora do retangulo.\n");
            }
            else {
                if (Y==Y1) {
                    printf("Não foi formado um retangulo com os dois pontos introduzidos.\n");
                    printf("Apenas um segmento de reta em Y = %.2f, e %.2f unidades em X.\n", Y, X-X1);
                }
                else {
                    if (X2 <= X && X2 >= X1) {
                        if (Y2 <= Y && Y2 >= Y1)
                            printf("O ponto introduzido se encontra dentro do retangulo.\n");
                        else 
                            printf("O ponto introduzido se encontra fora do retangulo.\n");
                    }   
                    else 
                        printf("O ponto introduzido se encontra fora do retangulo.\n");   
                }             
            }                    
        }
    } 
}    