
#include <stdio.h>

int main ()
{
    int i;
    printf("De mil em mil chegamos a algum lugar certo?\n");
    for (i=1000; i<= 100000; i= 1000 + i){
        printf("%d\n", i);
    }   



}