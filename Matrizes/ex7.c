
#include<string.h>
#include <stdio.h>

void main(){
    char string[50], matrix[3][10];
    int i, j;
    for (i = 0; i < 3; i++){
     //   for (j = 0; j < 10; j++){
         //printf("PASSEI AQUI EM %d \n", i);
            scanf(" %s", matrix[i]);
            printf("\n");
        //    printf("%s\n", matrix[i]);
        //    if (matrix[i][j] == '\0')
         //       break;
       // }
      //  matrix[i][j+1] = '\0';
    }
    for (i = 0; i < 3; i++){
    //    printf("SERA QUE PASSEI AQUI EM %d ?\n", i);
       //   printf("%s\n", matrix[i]);
       //     printf("%c\n", matrix[i][0]);
        for (j = 0; j < strlen(matrix[i]); j++){
      //      printf("SERA QUE SOU %d ?\n", j);
            printf("%c", matrix[i][j]);
        }
    putchar('\n');
    }
}