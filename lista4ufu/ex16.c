/*16. Fac¸a um programa que leia um vetor de 5 posic¸oes para n ˜ umeros reais e, depois, um ´
codigo inteiro. Se o c ´ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem ´
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 ´
escreva uma mensagem informando que o codigo ´ e inv ´ alido.*/

#include <stdio.h>

int main (){
    float vetor[5];
    int i, codigo;
    for (i = 0; i < 5; i++)
        scanf("%f", &vetor[i]);
    printf("Digite o codigo: ");
    scanf("%d", &codigo);
    switch (codigo){
        case 1: for (i = 0; i < 5; i++)
                printf("%.2f\n", vetor[i]);
                break;
        case 2: for (i = 4; i >= 0; i--)
                printf("%.2f\n", vetor[i]);
                break;
        case 0: return 0;
        default: printf("Codigo invalido.\n");
    }
}