// 3. Escreva uma função recursiva para calcular o 
// valor de uma base x elevada a um expoente y.

#include <stdio.h>

int potencia(int a, int b){
    if (b == 0)
        return 1;
    return a * potencia(a, b-1);
}
int main (){
    int a, b;
    printf("Teste da potencia: ");
    scanf("%d%d", &a, &b);
    printf("%d\n", potencia(a, b));
}