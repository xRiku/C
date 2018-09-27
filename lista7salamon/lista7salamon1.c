/*1. Faça um programa que leia um nome, calcule e retorne quantas
letras tem esse nome.*/

#include <stdio.h>
#include <string.h>

int main (){
    int i, x = 0;
    char string[50];
    printf("Digite a string: ");
    scanf("%[^\n]", string);
    for (i = 0; i < strlen(string) + 1; i++)
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
            x++;
    printf("Numero de letras na string: %d\n", x);
}