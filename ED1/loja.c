#include "loja.h"

Lista* criar_lista(){
    Lista *l = malloc(sizeof(Lista));
    l->primeiro = 1;
    l->ultimo = 1;
    return l;
}

void Libera(Lista *l){
    free(l);
}

int check_existencia(Lista *l, int codigo){
    int i = 0;
    for (i = 0; i < l->ultimo -1; i++){
        if (l->item[i].codigo == codigo)
            return 1;
    }
    return 0;
}


void Insere(produto produt, Lista *l){
    int x = 0;
    if (l->ultimo > MAXTAM)
        printf("Lista esta cheia\n");
    else {
        for(int i = 0; i < l->ultimo - 1; i++){
            if (l->item[i].codigo == produt.codigo){
                if (!strcmp(l->item[i].nome,produt.nome)){
                    l->item[i].qtd = produt.qtd + l->item[i].qtd;
                    l->item[i].preco = produt.preco;
                }
                else{
                    while(1){
                        if (check_existencia(l, produt.codigo)){
                            printf("Ja existe um produto registrado com esse codigo.\n"
                                "Insira outro codigo para o produto:");
                            scanf("%d", &produt.codigo);
                        }
                        else 
                            break;
                    }
                }
                x++;
                break;
            }
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
        printf("Quantidade:\t%d\n", l->item[i].qtd);
    }
}

int Quantidade(Lista *l){
    int contador = 0;
    for(int i = 0; i < l->ultimo - 1; i++){
        contador++;
    }
}


// produto buscacodigo(Lista *l, int codigo){
//     int i;
//     for (i = l->primeiro; i < l->ultimo; i++){
//         if (codigo == l[i]->itens>codigo)
//     }
    
// }
