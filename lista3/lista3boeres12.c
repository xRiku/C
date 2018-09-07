#include <stdio.h>

int main()
{ 
    char c;
    printf("Digite aqui a frase: ");
    while (1){
        c = getchar();
        if (c != '.')
            putchar(c);
        else {
            putchar('\n');
            break;
        }
    }

    return 0;
}