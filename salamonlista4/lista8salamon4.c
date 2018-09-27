/*4) Faça um programa que receba do usuário uma string. 
O programa imprime a string sem suas vogais.*/

            // && string[i] == 'e' && string[i] == 'i' 
            // && string[i] == 'O' && string[i] == 'u' && string[i] == 'A' 
            // && string[i] == 'E' && string[i] == 'I' && string[i] == 'O' 
            // && string[i] == 'U');

#include <stdio.h>
#include <string.h>

int evogal(char x){
    if ('a' == x || 'e' == x || 'i' == x || 'o' == x || 'u' == x 
    || 'A' == x || 'E' == x || 'I' == x || 'O' == x || 'U' == x )
        return 1;
    else 
        return 0;
}


void main (){
    char string[50];
    int j = 0;
    printf("Digite aqui uma string: ");
    fgets(string, sizeof(string), stdin);
    int tan = strlen(string);
    char string2[tan];
    for(int i = 0; i < tan; i++){
        if (evogal(string[i]) == 0){
            string2[j] = string[i];            
            j++;
        }
    }
    string2[j] = '\0';

    printf("%s", string2);
}