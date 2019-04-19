#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int codigo;
  char *nome;
  float preco;
  int qtd;
} Produto;

typedef struct TipoCelula *TipoApontador;

typedef struct TipoCelula{
  Produto Item;
  TipoApontador Prox;
} TipoCelula;

typedef struct{
  TipoApontador Primeiro, Ultimo;
} TipoLista;

void FLVazia(TipoLista *Lista);

int Vazia(TipoLista Lista);

void Insere(Produto x, TipoLista *Lista);

void Retira(int codigo, TipoLista *l, Produto *x);

int Quantidade(TipoLista Lista);

void ImprimeLista(TipoLista Lista);

Produto criaProduto(int cod, char *nome, int qtd, float preco);

Produto maisBarato(TipoLista *lista);

void ImprimeProduto(Produto p);

TipoApontador BuscaCodigo(int codigo, TipoLista *l);

int EmStock(Produto x);

void Kill_List(TipoLista *l);

int main(int argc, char *argv[]){

  TipoLista lista;
  Produto item;

  FLVazia(&lista);
  item = criaProduto(1, "Sabonete", 10, 3.90);
  // ImprimeProduto(item);
  Insere(item, &lista);
  item = criaProduto(2, "Arroz", 20, 13.90);
  // ImprimeProduto(item);
  Insere(item, &lista);
  item = criaProduto(3, "Feijao", 1, 17.90);
  // ImprimeProduto(item);
  Insere(item, &lista);
  item = criaProduto(4, "Tomate", 0, 10);
  // ImprimeProduto(item);
  Insere(item, &lista);
  item = criaProduto(5, "Uva", 5, 8);
  // ImprimeProduto(item);
  Insere(item, &lista);
  // Insere(item, &lista);
  Retira(5, &lista, &item);
  ImprimeLista(lista);
  printf("[%d]\n", Quantidade(lista));
  // TipoApontador p = BuscaCodigo(3, &lista);
  // if (p != NULL)
  //   ImprimeProduto(p->Item);
  item = maisBarato(&lista);
  ImprimeProduto(item);
  Kill_List(&lista);
  return (0);
}

void FLVazia(TipoLista *Lista){
  Lista->Ultimo = Lista->Primeiro = NULL;
}

int Vazia(TipoLista Lista){
  return (Lista.Primeiro == Lista.Ultimo);
}

void Insere(Produto x, TipoLista *Lista){
  if (Lista->Primeiro == NULL){
    Lista->Ultimo = malloc(sizeof(TipoCelula));
    Lista->Primeiro = Lista->Ultimo;
    Lista->Ultimo->Item = x;
    Lista->Ultimo->Prox = NULL;
  }
  else{
    if (Lista->Ultimo->Item.codigo == x.codigo){
      printf("Codigo %d ja existente\n", x.codigo);
      return;
    }
    else{
    Lista->Ultimo->Prox = malloc(sizeof(TipoCelula));
    Lista->Ultimo = Lista->Ultimo->Prox;
    Lista->Ultimo->Item = x;
    Lista->Ultimo->Prox = NULL;
    }
  }
}

void ImprimeLista(TipoLista Lista){
  TipoApontador p;
  for (p = Lista.Primeiro; p != NULL; p = p->Prox){
    ImprimeProduto(p->Item);
  }
}

int Quantidade(TipoLista Lista){
  TipoApontador p;
  int contador = 0;
  for (p = Lista.Primeiro; p != NULL; p = p->Prox){
    contador++;
  }
  return contador;
}

Produto criaProduto(int cod, char *nome, int qtd, float preco){
  Produto p;
  p.codigo = cod;
  p.nome = malloc(sizeof(char) * strlen(nome));
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

TipoApontador BuscaCodigo(int codigo, TipoLista *l){
  TipoApontador p;
  for (p = l->Primeiro; p != NULL; p = p->Prox){
    if (p->Item.codigo == codigo)
      return p;
  }
  return NULL;
}

void Retira(int codigo, TipoLista *l, Produto *x){
  TipoApontador p;
  TipoApontador anterior = NULL;
  if (BuscaCodigo(codigo, l) != NULL){
    for(p = l->Primeiro; p != NULL; p = p->Prox){
      if (codigo == l->Primeiro->Item.codigo){
        if (EmStock(l->Primeiro->Item)){
          printf("Produto em estoque não pode ser removido\n");
          return;
        }
        else{
          l->Primeiro = p->Prox;
          free(p->Item.nome);
          free(p);
          return;
        }
      }
      else{
        if (codigo == p->Item.codigo){
          if (EmStock(p->Item)){
            printf("Produto em estoque não pode ser removido\n");
            return;
          }
          else{
            if (p->Prox == NULL){
              free(p->Item.nome);
              free(p);
              anterior->Prox = NULL;
              return;
            }
            else{
              anterior->Prox = p->Prox;
              free(p->Item.nome);
              free(p);
              return;
            }
          }
        }
      }
      anterior = p;
    }
  }
}

Produto maisBarato(TipoLista *lista){
  TipoApontador p;
  Produto menor_produt = lista->Primeiro->Item;
  float menor = lista->Primeiro->Item.preco;
  for(p = lista->Primeiro; p != NULL; p = p->Prox){
    if (menor > p->Item.preco){
      menor = p->Item.preco;
      menor_produt = p->Item;
    }
  }
  return menor_produt;
}

int EmStock(Produto x){
  return (x.qtd > 0);
}

void Kill_List(TipoLista *l){
  TipoApontador p;
  for (p = l->Primeiro; p != NULL; p = p->Prox){
    free(p->Item.nome);
    free(p);
  }
}