/*2) Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas
respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um
terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro
qtd para retornar o tamanho de x3.
Exemplo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}.*/


#include <stdio.h>
#include <stdlib.h>
int isin(int *a, int n, int b){
    for (int i = 0; i < n; i++){
        if (a[i] == b)
            return 1;
    }    
    return 0;
}

int* interseccao(int *x1, int *x2, int n1, int n2, int* qtd){
    int tamanho = 0, i, j, *paux;
    if (n1 <= n2){
        paux = malloc (sizeof(int)*n2);
        for (i = 0; i < n1; i++){
            if (isin(x2, n2, x1[i])){
                paux[j] = x1[i];
                printf("%d -> %d\n", paux[j], i);
                tamanho++;
                j++;
            }
        }
    }
    else{
        paux = malloc (sizeof(int)*n1);
        for (i = 0; i < n2; i++){
            if (isin(x1, n1, x2[i])){
                paux[j] = x2[i];
                tamanho++;
                j++;
            }
        }
    }
    *qtd = tamanho;
    int *x3 = malloc (sizeof (int) * tamanho);
    for (i = 0; i < tamanho; i++){
        x3[i] = paux[i];
    }
    free(paux);
    return x3;

}
int main (){
    int i, n1, n2, *teste, qtd, contador = 0;
    printf("Digite aqui o tamanho dos vetores: ");
    scanf("%d%d", &n1, &n2);
    int *x1 = malloc (sizeof(int)* n1), *x2 = malloc (sizeof(int)* n2);
    puts("Vetor 1:");
    for (i = 0; i < n1; i++){
        scanf("%d", &x1[i]);
    }
    puts("Vetor 2:");
    for (i = 0; i < n2; i++){
        scanf("%d", &x2[i]);
    }
    teste = interseccao(x1, x2, n1, n2, &qtd);
    printf("[%d]\n", qtd);
    for (int i = 0; i < qtd; i++){
        if (isin(teste, qtd, teste[i])){
            contador++;
            printf("%d\n", teste[i]);
        }
    }
    free(teste);
    free(x1);
    free(x2);
    // Falta agora ordenar o vetor e retirar os numeros repetidos
    return 0;
}