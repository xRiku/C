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
    int i, j, linha, x = 0;
    unsigned int n;
    printf("Digite aqui o numero maximo de nomes: ");
    while(1){
        scanf("%d", &n);
        if (n > 0)
            break;
        printf("O numero deve ser maior que 0\n");
    }
    char string[30], resposta, **pN = malloc(sizeof(char*) * n), **pNe = malloc(sizeof(char*) * n);
    for (i = 0; i < n; i++){
        pN[i] = malloc(sizeof(char)*30);
        pNe[i] = malloc(sizeof(char)*30);
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
            while(1){
                scanf("%d", &linha);
                if (linha <= n)
                    break;
                printf("Linha invalida\nDigite outra linha\n");
            }
            printf("Digite aqui o nome a ser colocado: ");
            scanf(" %29[^\n]", pN[linha-1]);
        }
        else{
            if (resposta == 'b' || resposta == 'B'){
                printf("Digite aqui de qual linha deseja excluir o nome:");
                scanf("%d", &linha);
                pNe[linha-1] = pN[linha-1];
                pN[linha-1] = " ";
            }
            else{
                if (resposta == 'c' || resposta == 'C'){
                    printf("Informe o nome a ser substituido:");
                    scanf(" %29[^\n]", string);
                    for (i = 0; i < n; i++){
                        if (strcmp(string, pN[i]) == 0){
                            x++;
                            printf("Digite um nome para sobrepor '%s'\n", pN[i]);
                            strcpy(pNe[i],pN[i]);
                            scanf(" %29[^\n]", pN[i]);
                        }
                    }
                    if (x == 0)
                        printf("O nome não se encontra na lista\n");
                }
                else{
                    if (resposta == 'd' || resposta == 'D'){
                        printf("Informe o nome a ser APAGADO:");
                        scanf(" %29[^\n]", string);
                        for (i = 0; i < n; i++){
                            if (strcmp(string, pN[i]) == 0){
                                strcpy(pNe[i],pN[i]);
                                pN[i] = " ";
                            }
                        }
                    }
                    else{
                        if (resposta == 'e' || resposta == 'E'){
                            printf("Digite aqui a linha para recuperar o nome: ");
                            scanf("%d", &linha);
                            pN[linha - 1] = pNe[linha - 1];
                        }
                        else{
                            if (resposta == '0')
                                break;
                            else
                                printf("Resposta invalida\nAlternativa nao existe\n");
                        }
                    }
                }
            }
        }
        for (i = 0; i < n; i++){
            printf("- %s\n", pN[i]);
        }
    }
    for (i = 0; i < n; i++){
        free(pN[i]);
        free(pNe[i]);
    }
    free(pN);
    free(pNe);
    return 0;
}