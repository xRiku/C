/*5) Faça um programa que leia um inteiro N e:
• Crie e leia um vetor com os dados de N carros: marca (máximo 15 letras), ano e preço.
• Leia um valor P e mostre as informações de todos os carros com preço menor que P. Repita
este processo até que seja lido um valor P = 0.*/

#include <stdio.h>
#include <stdlib.h>

struct carro{
    char marca[15];
    int ano;
    float preco;
};

int main (){
    int n, i;
    float preco;
    printf("Digite aqui um numero total de carros:\n");
    scanf("%d", &n);
    struct carro vetor[n];
    for (i = 0; i < n; i++){
        printf("Carro %d:\n", i+1);
        printf("Marca:");
        scanf(" %s", vetor[i].marca);
        printf("Ano:");
        scanf("%d", &vetor[i].ano);
        printf("preco:");
        scanf("%f", &vetor[i].preco);
    }
    do{
        printf("Digite aqui um preco:");
        scanf("%f", &preco);
        for (i = 0; i < n; i++){
            if (vetor[i].preco <= preco){
                printf("Marca:");
                printf("%s\n", vetor[i].marca);
                printf("Ano:");
                printf("%d\n", vetor[i].ano);
                printf("preco:");
                printf("%.2f\n", vetor[i].preco);
                puts("****");
            }
        }
    }
    while(preco != 0);
}