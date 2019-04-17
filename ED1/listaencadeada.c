#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int codigo;
  char *nome;
  float preco;
  int qtd;
}Produto;


typedef struct TipoCelula *TipoApontador;

typedef struct TipoCelula {
  Produto Item;
  TipoApontador Prox;
} TipoCelula;

typedef struct {
  TipoApontador Primeiro, Ultimo;
} TipoLista;


void FLVazia(TipoLista *Lista);

int Vazia(TipoLista Lista);

void Insere(Produto x, TipoLista *Lista);

int Quantidade(TipoLista Lista);

void ImprimeLista(TipoLista Lista);

Produto criaProduto(int cod, char *nome, int qtd, float preco);

void ImprimeProduto(Produto p);


int main(int argc, char *argv[])
{

  TipoLista lista;
  Produto item;

  FLVazia(&lista);
  item = criaProduto(1,"Sabonete", 10, 3.90);
  Insere(item, &lista);
  item = criaProduto(2,"Arroz", 20, 13.90);
  Insere(item, &lista);
  item = criaProduto(3,"Feijao", 1, 17.90);
  Insere(item, &lista);
  item = criaProduto(4,"Tomate", 0, 10);
  Insere(item, &lista);
  item = criaProduto(5,"Uva", 5, 8);
  Insere(item, &lista);
//  Insere(item, &lista);
  ImprimeLista(lista);
//   Retira(4, &lista, &item);
  ImprimeLista(lista);
  printf("[%d]\n", Quantidade(lista));
//   TipoApontador p = BuscaCodigo(3, &lista);
//   ImprimeProduto(p->Item);
//   item = maisBarato(&lista);
//   Imprime(item);
  return(0);
}

void FLVazia(TipoLista *Lista){ 
    Lista -> Primeiro = malloc(sizeof(TipoCelula));
    Lista -> Ultimo = Lista -> Primeiro;
    Lista -> Primeiro -> Prox = NULL;
}

int Vazia(TipoLista Lista){
    return (Lista.Primeiro == Lista.Ultimo);
}

void Insere(Produto x, TipoLista *Lista){
    Lista -> Ultimo -> Prox = (TipoApontador) malloc(sizeof(TipoCelula));
    Lista -> Ultimo = Lista -> Ultimo -> Prox;
    Lista -> Ultimo -> Item = x;
    Lista -> Ultimo -> Prox = NULL;
}

void ImprimeLista(TipoLista Lista){
    TipoApontador p;
    for(p = Lista.Primeiro->Prox; p != NULL; p = p->Prox){
        ImprimeProduto(p->Item);
    }
}

int Quantidade(TipoLista Lista){
    TipoApontador p;
    int contador = 0;
    for (p = Lista.Primeiro->Prox; p != NULL; p = p->Prox){
        contador++;
    }
    return contador;
}

Produto criaProduto(int cod, char *nome, int qtd, float preco){
    Produto p;
    p.codigo = cod;
    p.nome = malloc(sizeof(char)*strlen(nome));
    strcpy(p.nome, nome);
    p.qtd = qtd;
    p.preco = preco;
    return p;
}

void ImprimeProduto(Produto p){
    printf("Codigo: %d\n", p.codigo);
    printf("Nome: %s\n", p.nome);
    printf("Preco: %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.qtd);
}