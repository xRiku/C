
/*3) Faça um programa que leia dados de 5 livros: título (máximo 30 letras), autor (máximo 15
letras) e ano, armazenando-os em um vetor. Procure um livro por título, perguntando ao usuário
qual título deseja buscar. Mostre os dados de todos os livros encontrados. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro{
    char titulo[30];
    char autor[15];
    int ano;
};

int main(){
    char* titulo = malloc(sizeof(char)*30);
    int i;
    struct livro *vetor = malloc(sizeof(struct livro) * 5);
    printf("Insira aqui os titulos:\n");
    for(i = 0; i < 2; i++){
        printf("Livro %d\n", i+1);
        printf("Titulo:\n");
        scanf(" %[^\n]", vetor[i].titulo);
        printf("Autor:\n");
        scanf(" %[^\n]", vetor[i].autor);
        printf("Ano:\n");
        scanf("%d", &vetor[i].ano);
    }
    printf("Busca: ");
    while(1){
        scanf(" %s", titulo);
        for(i = 0; i < 5; i++){
            if (!strcmp(titulo, vetor[i].titulo)){
                printf("Titulo: %s\nAutor: %s\nAno: %d\n", vetor[i].titulo, vetor[i].autor, vetor[i].ano);
                break;
            }
        }
        if (!strcmp(titulo, vetor[i].titulo)){
            break;
        }
    }
    free(vetor);
    free(titulo);
}