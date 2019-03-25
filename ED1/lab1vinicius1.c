
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*1 - Escreva um programa que declare um inteiro, um real e um char, e ponteiros
para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os
valores de cada variável usando os ponteiros. Imprima os valores das variáveis
antes e após a modificação. */

void f1(){
    int *p, x;
    p = &x;
    char *c, y;
    c = &y;
    float *pf, z;
    pf = &z;
    printf("Digite aqui um inteiro, um char, e um real:");
    scanf("%d %c %f", &x, &y, &z);
    printf("%d\n%c\n%.2f\nNovos valores: ", x, y ,z);
    scanf("%d %c %f", p, c, pf);
    printf("%d\n%c\n%.2f\n", x, y, z);
}
/*2 - Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.
*/

void f2(){
    int a, b;
    int *pa = &a, *pb = &b;
    printf("1 -- %p\n2 -- %p\n", pa, pb);
    if (pa >= pb)
        printf("%p\n", pa);
    else
        printf("%p\n", pb);
}

/*3 - Dado o programa abaixo que lê pares de números separados por espaço e
imprime os números em sua ordem original quando o primeiro é menor ou igual
ao segundo e em ordem inversa quando o primeiro é maior do que o segundo.
Implemente a função que faz a troca dos números de duas variáveis quando
apropriado. Escolha o cabeçalho de função apropriado para a resolução desse
problema. Perceba que o programa principal (função main) não deve ser
alterado, exceto a passagem de parâmetros para a função.*/

int TrocaInterios(int *a, int *b){
    int troca;
    if ( *a <= *b){
        return 1;
    }
    else {
        troca = *b;
        *b = *a;
        *a = troca;
        return 0;
    }

}
/* 4 - Crie uma função que receba três parâmetros: um array, o tamanho do array e
um valor do mesmo tipo do array. A função deverá preencher os elementos de
array com esse valor. Não utilize índices para percorrer o array, apenas
aritmética de ponteiros. */
void f4 (int *p1, int n, int a){
    for (int i = 0; i < n; i++){
        *(p1 + i) = a;
    }
}

/* 5 - Implemente uma função que receba como parâmetro um vetor de números
inteiros (vet) de tamanho n e inverta a ordem dos elementos armazenados nesse
vetor. Essa função deve obedecer ao protótipo:
void inverte (int n, int* vet); */

void inverte (int n, int* vet){
    int i, j;
    int vet2[n];
    for (i = 0; i < n; i++){
        vet2[i] = vet[i];
    }
    for (i = n - 1, j = 0; i >= 0, j < n; i--, j++){
        vet[j] = vet2[i];
        
    }

}
/* 6 - Elabore uma função que receba duas strings como parâmetros e verifique se
a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para
acessar os caracteres das strings. */

// int isIn(char* a, char* b){
//     if (strlen(a) > strlen(b))
//         return 0;
//     int i;
//     while(1){
//         for (i = 0; i < strlen(b); i++){
//             if (a == b){

//             }
//         }
//     }
// }

int main(){
    // char str[41] = "Rio de Janeiro";
    // char str2[41] = "Rio";
    // }
    int n1, n2;
    int *p1 = &n1, *p2 = &n2;
    while ( scanf("%d %d", &n1, &n2) == 2 ){
        if ( TrocaInterios( p1, p2) ){
            printf("TROCADO: %d %d\n", n1, n2);
        } 
        else {
            printf("ORIGINAL: %d %d\n", n1, n2);
        }
    }
    return 0;
}