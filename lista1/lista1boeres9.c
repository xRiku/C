/* i) Determinar o número de cédulas de cada tipo (1,2,5,10,20,50 e 100)
para pagar uma quantia em reais, lida pelo teclado. */

#include <stdio.h>

int main ()
{
    int amount, c100, c50, c20, c10, c5, c2, c1;
    scanf("%d", &amount);
    c100 = amount / 100;
    c50 = (amount % 100);
    c20 = (c50 % 50);
    c10 = (c20 % 20) ;
    c5 = (c10 % 10) ; 
    c2 = (c5 % 5) ;
    c1 = c2 % 2;
    printf ("Notas de 100: %d\n", c100); printf("Notas de 50: %d\n", c50/50);
    printf ("Notas de 20: %d\n", c20/20); printf("Notas de 10: %d\n", c10/10);
    printf ("Notas de 5: %d\n", c5/5); printf("Notas de 2: %d\n", c2/2);
    printf ("Notas de 1: %d\n", c1); 

}