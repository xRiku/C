/*2) Faça um programa que receba do usuário o tamanho de uma string e chame uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o
conteúdo dessa string. O programa deve imprimir a string sem suas vogais.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isvogal(char a){
    if (a == 'a' || a == 'A' || a == 'E' || a == 'e' ||
        a == 'I' || a == 'i' || a == 'O' || a == 'o' ||
        a == 'u' || a == 'U' )
        return 1;
    else
        return 0;
}

void main (){
    int n, i;
    printf("Digite aqui o tamanho da string:");
    scanf("%d", &n);
    char *string = malloc (sizeof(char) * n);
    setbuf(stdin, NULL);
    for (i = 0; i < n; i++){
        scanf("%c", string+i);
        if (*(string+i) == '\n'){
            *(string+i) = '\0';
            break;
        }
    }
    //Não consigo explicar o comportamento dessa string(?) o simbolo '\n' não termina a string com '\0';
    for (i = 0; i < strlen(string); i++){
        //printf("%d - > %c\n", i, *(string+i));
        if (isvogal(*(string+i)) == 0)
            printf("%c", *(string+i));
    }
    //printf("[%d]\n", i);
    printf("%s\n", string);
    free(string);
}