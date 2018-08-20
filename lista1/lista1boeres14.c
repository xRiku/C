/* n) Faça um programa que mostre a versão maiúscula de uma letra minúscula. Caso o caractere não
seja letra ou não seja minúscula, mostre uma mensagem. OBS: Proibido usar a função  
toupper. */

#include <stdio.h>

int main () 
{
    char letra, letra2;
    printf("\t ***** MAQUINA CONVERSORA DE LETRAS *****\n\n");
    printf("Digite aqui a sua letra: ");
    scanf ("%c", &letra);
    if ((letra >= 'A' && letra <= 'Z' ) || (letra >= 'a' && letra <= 'z') )
    {
        if (letra >= 97)
        { 
            letra2 = letra - 32;
            printf("Essa e a letra em sua formula maiuscula: %c.\n", letra2);
            printf("A letra escolhida foi: %c\n", letra);
        }
        else 
        {
            letra2 = letra + 32 ;
            printf("Essa e a letra em sua formula minuscula: %c.\n", letra2);
            printf("A letra escolhida foi: %c", letra);
        }    
    }
    else {
        printf("\t ***** ERRO *****\nO caracter nao e uma letra!\n");
    }


}