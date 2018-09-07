#include <stdio.h>

int main()
{   
    int minuscula = 0, maiuscula = 0;
    char c, d;
    printf("Digite aqui a frase: ");
    while (1){
        c = getchar();
        if (c != '.')
            if (c >= 'A' && c <= 'Z')
                maiuscula++;
            else {
                if (c >= 'a' && c <= 'z')
                    minuscula++;
            }
        else {
            putchar('\n');
            break;
        }
    }
    printf("Numero de maiusculas: \t%d\nNumero de minusculas: \t%d\n", maiuscula, minuscula);
    printf("Total: \t\t%d\n", maiuscula + minuscula);
    return 0;
}