/* 3. Faça um programa que leia uma palavra e a imprima de trás para
frente. */
#include <stdio.h>
#include <string.h>

void main (){
    char string[50], string2[50];
    int i, j;
    printf("Digite aqui a string: ");
    scanf("%s", string);
    printf("%s\n", string);
    for (i = strlen(string) - 1, j = 0; j < strlen(string), i >= 0; i--, j++)
        string2[j] = string[i];
    printf("%s\n", string2);
}