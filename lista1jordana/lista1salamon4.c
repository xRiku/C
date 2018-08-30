/*Para participar da categoria OURO do 1º. Campeonato Mundial de bolinha de Gude o
jogador deve pesar entre 70 Kg (inclusive) e 80 kg (inclusive) e medir 1,75 m (inclusive)
e 1,90 m (inclusive). Leia a altura e o peso de um jogador e determine se o jogador está
apto a participar do campeonato escrevendo uma das seguintes mensagens, conforme
cada situação */

#include <stdio.h>

int main ()
{
    float altura, peso;
    printf("Digite aqui os valores do:\nPeso (Em Kg): ");
    scanf("%f", &peso);
    printf("Altura (Em m): ");
    scanf("%f", &altura);
    if (altura<=0||altura>=3)
        printf("DIGITE UMA ALTURA VALIDA.\n");
    if (peso <= 0||peso>=500)
        printf("DIGITE AQUI UM PESO VALIDO.\n");
    if (altura >= 1.75) {
        if (altura <= 1.9) {
            if (peso <= 80) {
                if (peso >= 70)
                    printf("ACEITO.\n");
                else 
                    printf("RECUSADO POR PESO.\n");
            }
            else
                printf("RECUSADO POR PESO.\n");
        }
        else {
            if (peso <= 80) {
                if (peso >= 70)
                    printf("RECUSADO POR ALTURA.\n");
                else 
                    printf("TOTALMENTE RECUSADO.\n");
            }
            else
                printf("TOTALMENTE RECUSADO.\n");
        }
    }
    else {
        if (peso <= 80) {
            if (peso >= 70)
                printf("RECUSADO POR ALTURA.\n");
            else 
                printf("TOTALMENTE RECUSADO.\n");
            }
        else
            printf("TOTALMENTE RECUSADO.\n");
    }
}