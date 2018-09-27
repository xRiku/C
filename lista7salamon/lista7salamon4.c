/*4. Faça um programa que leia uma palavra, calcule quantas vogais
(a, e, i, o, u) possui essa palavra. Depois, leia um caractere (vogal
ou consoante) e substitua todas as vogais da palavra dada por esse
caractere.*/

#include <stdio.h>
#include <string.h>

int main (){
    char string[50];
    int i, x = 0;
    printf("Digite aqui a palavra: ");
    scanf("%s", string);
    for (i = 0; i < strlen(string); i++)
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' 
        || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' 
        || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' 
        || string[i] == 'U'){
            x++;
        }
    printf("Numero de vogais na palavra: %d\n", x);
    printf("Digite aqui o caracter: ");
    char caract;
    scanf(" %c", &caract);
    for (i = 0; i < strlen(string); i++)
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' 
        || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' 
        || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' 
        || string[i] == 'U')
            string[i] = caract;
    printf("%s\n", string);
}