

#include <stdio.h>

void main (){
    int i, j, matrix[5][5];
    for (i = 0; i < 5; i++)
        for (j = 0; j< 5; j++)
            scanf("%d", &matrix[i][j]);
    for (i = 0; i < 5; i++){
        for (j = 0; j< 5; j++)
            printf("%d ", matrix[i][j]);
    putchar('\n');
    }
    j = 0;
    for (i = 4; i >= 0; i--)
        while(j < 5){
            printf("%d ", matrix[i][j]);
            j++;
            break;
    }
}