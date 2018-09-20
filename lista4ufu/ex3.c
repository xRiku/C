/*3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>

int main (){
    int vetor1[10], vetor2[10], i;
    printf("Digite aqui 10 numeros para serem testados: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &vetor1[i]);
    for (i = 0; i < 10; i++)
         vetor2[i] = vetor1[i] * vetor1[i];
    for (i = 0; i < 10; i++)
        printf("%2d \t%2d\n", vetor1[i], vetor2[i]);
}