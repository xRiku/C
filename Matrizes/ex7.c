#include<string.h>
#include <stdio.h>

void main(){
    char string[50], matrix[3][10];
    int i, j, x = 0;
    for (i = 0; i < 3; i++){
            scanf(" %s", matrix[i]);
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < strlen(matrix[i]); j++){
            printf("%c", matrix[i][j]);
        }
    putchar('\n');
    }
    printf("Digite aqui a string:");
    scanf(" %s", string);
    for (i = 0; i < 3; i++){
        for(j = 0; j < strlen(matrix[i]); j++)
            if (string[j] == matrix[i][j])
                x++;
        if (x == strlen(matrix[i]))
            printf("A string esta contida na matriz.\n");
    x = 0;
    }
}