/* Baseado na implementação de lista por arranjo visto em aula,
Implemente um TAD Lista que armazena o struct produto e que contenha 
todas as funções básicas:
(criar, inserir, remover, verificar se está vazia, quantidade). */

#include "loja.h"

int main(){
    Lista *l = criar_lista();
    Insere(cria_produto(), l);
    Insere(cria_produto(), l);
    Insere(cria_produto(), l);
    Imprime(l);
    Libera(l);
}
