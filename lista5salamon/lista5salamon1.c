//1.Escreva uma função recursiva que calcule o n-ésimo termo da sequencia de fibonacci.

#include <stdio.h>

int fibrec(int n){
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    return fibrec(n-1) + fibrec(n-2);
}
int main (){
    int n;
    printf("Digite aqui o numero do termo na sequencia: ");
    scanf("%d", &n);
    printf("%d\n", fibrec(n));
}