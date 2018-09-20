/* 4. Escreva uma função recursiva que calcule o número de grupos
distintos com k pessoas que podem ser formados a partir de um conjunto
de n pessoas. A definição abaixo da função Comb (n, k) define as regras:
*/

#include <stdio.h>
int Comb(int n, int k){
    if (k == 1)
        return n;
    if (k == n)
        return 1;
    if (1<k<n)
        return Comb(n-1, k-1) + Comb(n-1, k);
}
int main (){
    int n, k;
    printf("Teste da func Comb: ");
    scanf("%d%d", &n, &k);
    printf("%d\n", Comb(n, k));
}