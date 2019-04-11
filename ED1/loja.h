#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define INICIOARRANJO   1
#define MAXTAM          3

typedef int Posicao;

typedef struct{
    int codigo;
    char nome[30];
    float preco;
    int qtd;
} produto;

typedef struct{
    produto item[MAXTAM];
    int primeiro, ultimo;
} Lista;

produto buscacodigo(Lista *l, int codigo);

Lista* criar_lista();

void Libera(Lista *l);

void Insere(produto p, Lista *l);

void Remover(Posicao p, Lista *l);

int Vazia(Lista *l);

int Quantidade(Lista *l);

void Imprime(Lista *l);

produto cria_produto();

int check_existencia(Lista *l, int codigo);