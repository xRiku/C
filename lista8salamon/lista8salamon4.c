/*4) Faça um programa para associar nomes às linhas de uma matriz de caracteres. O usuário
irá informar o número máximo de nomes que poderão ser armazenados. Cada nome
poderá ter até 30 caracteres com o '\0'. O usuário poderá usar 5 opções diferentes para
manipular a matriz:
(a) Gravar um nome em uma linha da matriz;
(b) Apagar o nome contido em uma linha da matriz;
(c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro
nome;
(d) Informar um nome, procurar a linha onde ele se encontra e apagar;
(e) Pedir para recuperar o nome contido em uma linha da matriz;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int n, i, j, linha;
    printf("Digite aqui o numero maximo de nomes: ");
    scanf("%d", &n);
    char string[30], resposta, **pN = malloc(sizeof(char*) * n);
    for (i = 0; i < n; i++){
        pN[i] = malloc(sizeof(char)*30);
        //scanf(" %29[^\n]", pN[i]);
    }
    while(1){
        printf("\t MENU\n");
        printf("(a) Gravar um nome em uma linha da matriz;\n"
                "(b) Apagar o nome contido em uma linha da matriz;\n"
                "(c) Informar um nome, procurar a linha onde ele se encontra e "
                "substituir por outro nome;\n"
                "(d) Informar um nome, procurar a linha onde ele se encontra e apagar;\n"
                "(e) Pedir para recuperar o nome contido em uma linha da matriz;\n");
        scanf(" %c", &resposta);
        if (resposta == 'a' || resposta == 'A'){
            printf("Digite aqui em qual linha deseja colocar o novo nome:");
            scanf("%d", &linha);
            printf("Digite aqui o nome a ser colocado: ");
            scanf(" %29[^\n]", pN[linha-1]);
        }
        if (resposta == 'b' || resposta == 'B'){
            printf("Digite aqui de qual linha deseja excluir o nome:");
            scanf("%d", &linha);
            pN[linha-1] = " ";
        }
        if (resposta == 'c' || resposta == 'C'){
            printf("Informe o nome a ser substituido:");
            scanf(" %29[^\n]", string);
            for (i = 0; i < n; i++){
                if (strcmp(string, pN[i])){
                    printf("Digite um nome para sobrepor '%s'\n", pN[i]);
                    scanf(" %29[^\n]", pN[i]);
                }
            }
        }
        for (i = 0; i < n; i++){
            printf("- %s\n", pN[i]);
        }
    }



}