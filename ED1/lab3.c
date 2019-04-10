/* Baseado na implementação de lista por arranjo visto em aula,
Implemente um TAD Lista que armazena o struct produto e que contenha 
todas as funções básicas:
(criar, inserir, remover, verificar se está vazia, quantidade). */


#include <stdio.h> 
#include <stdlib.h>
#define INICIOARRANJO   1
#define MAXTAM          2

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

int main(){
    Lista *l = criar_lista();
    Insere(cria_produto(), l);
    Insere(cria_produto(), l);
    Imprime(l);
    Libera(l);
}


Lista* criar_lista(){
    Lista *l = malloc(sizeof(Lista));
    l->primeiro = 1;
    l->ultimo = 1;
    return l;
}

void Libera(Lista *l){
    free(l);
}


void Insere(produto produt, Lista *l){
    int x = 0;
    if (l->ultimo > MAXTAM)
        printf("Lista esta cheia\n");
    else {
        for(int i = 0; i < l->ultimo - 1; i++){
            if (l->item[i].codigo == produt.codigo)
                l->item[i].codigo += produt.qtd;
                x++;
                break;
        }
        if (x == 0){
            l->item[l->ultimo - 1] = produt;
            l->ultimo++;
        }
    }
}

produto cria_produto(){
    produto produt;
    printf("Digite um codigo:");
    scanf("%d", &produt.codigo);
    printf("Digite um nome:");
    scanf(" %30[^\n]", produt.nome);
    printf("Digite um preco:");
    scanf("%f", &produt.preco);
    printf("Digite a quantidade:");
    scanf("%d", &produt.qtd);
    return produt;
}

int Vazia(Lista *l){
    if (l->ultimo == 1)
        return 1;
    else
        return 0;
}

void Remover(Posicao p, Lista *l){
    int Aux;
    if ( Vazia(l) || p >= l->ultimo){ 
        printf(" Erro\nPosicao nao existe\n");
        return;
    }
    // *Item = Lista -> Item[p - 1];
    l->ultimo--;
    for (Aux = p; Aux < l->ultimo; Aux++)
        l->item[Aux - 1] = l-> item[Aux];
}

void Imprime(Lista *l){
    int i;
    for (i = 0; i < l->ultimo-1; i++){
        printf("Item %d\n", i+1);
        printf("Codigo:\t\t%d\n", l->item[i].codigo);
        printf("Nome:\t\t%s\n", l->item[i].nome);
        printf("Preco:\t\t%.2f\n", l->item[i].preco);
        printf("Quantidade:\t%.2f\n", l->item[i].qtd);
    }
}

// produto buscacodigo(Lista *l, int codigo){
//     int i;
//     for (i = l->primeiro; i < l->ultimo; i++){
//         if (codigo == l[i]->itens>codigo)
//     }
    
// }
