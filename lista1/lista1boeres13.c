//m) Faça um programa que mostre se uma letra é ou não uma vogal.


#include <stdio.h>

int main ()
{
    char letra;
    printf("\t ***** MAQUINA MAGICA DE TESTAR LETRAS ***** \n\n");
    printf("Insira a letra de sua escolha aqui: ");
    scanf("%c", &letra);
    if ((letra >= 'A' && letra <= 'Z' ) || (letra >= 'a' && letra <= 'z') ) { 
        if (letra == 'a' || letra == 'e'|| letra == 'i' ||letra == 'o' || letra == 'u'||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') 
        {
            printf("\t***** PARABENS *****\nVoce digitou uma vogal.\nVogal digitada: %c\n", letra);
        }
        else
        {
            printf("***** QUE PENA *****\n\nVoce digitou uma letra, porem nao uma vogal.\n");
            printf("Letra digitada: %c\n", letra);
        }
    }
    else 
    {
        printf("ERRO\nO Caracter digitado nao e uma letra.\n");
    }
    

}