/* 2.Faça um programa para apresentar todos os números contidos em
um intervalo aberto de limites n e m e que sejam múltiplos de 3, 4 ou 7.*/

#include <stdio.h>

int main () 
{
    int n, m, i;
    printf("Digite aqui os limites do intervalo: ");
    scanf("%d%d", &n, &m);
    i = n+1;
    if (n<m)
        if  (m-n!=1){
            printf("Numeros contidos no intervalo que obedecam a regra imposta: \n");
            while (i<m) {
                if (i%4==0||i%3==0||i%7==0){
                    printf("%d\n", i);
                }    
                i = i + 1; 
            }
            printf("***** Fim da lista *****\n");
        }    
        else    
            printf("Intervalo muito pequeno.\n");
    else
            printf("ERRO\nO segundo limite deve ser maior que o primeiro.\n");
}