/*2. Faça um programa que leia um nome e imprima o nome somente
se a primeira letra do nome for ”a”(maiúscula ou minúscula).*/

#include <stdio.h>
void main (){
    char string[50];
    printf("Digite aqui a string: ");
    scanf("%[^\n]", string);
    if (string[0] != 'a' && string[0] != 'A')
        return;
    printf("%s\n", string);
}