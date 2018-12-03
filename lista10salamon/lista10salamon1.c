/*1) Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3, implemente um programa
que calcule a soma de dois vetores e imprima o resultado*/
#include <stdio.h>
#include <stdlib.h>


struct Vetor{
float x;
float y;
float z;
};

int main (){
    struct Vetor vetor1, vetor2, vetor3;
    printf("Vetor1: ");
    scanf("%f", &vetor1.x);
    scanf("%f", &vetor1.y);
    scanf("%f", &vetor1.z);
    printf("Vetor2: ");
    scanf("%f", &vetor2.x);
    scanf("%f", &vetor2.y);
    scanf("%f", &vetor2.z);
    vetor3.x = vetor1.x + vetor2.x;
    vetor3.y = vetor1.y + vetor2.y;
    vetor3.z = vetor1.z + vetor2.z;
    printf("x: %.2f\n", vetor3.x);
    printf("y: %.2f\n", vetor3.y);
    printf("z: %.2f\n", vetor3.z);
}
