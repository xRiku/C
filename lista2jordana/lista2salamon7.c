

#include <stdio.h>

int main ()
{   
    float p1, p2, p3, p4, S;
    printf("Digite aqui o valor das notas: ");
    scanf("%f%f%f%f", &p1, &p2, &p3, &p4);
    S = p1 + p2 + p3 + p4;
    if (p1 > 10 || p1 < 0 || p2 < 0 || p2 > 10 || p3 < 0 || p3 > 10 || p4 < 0 || p4 > 10){
        printf("PELO MENOS UMA NOTA INVALIDA.\n");
        return 0;
    }
    if (S >= 32)
        printf("APROVADO.\n");
    else {
        if (S >= 20){
            printf("O aluno está de prova final.\n");
            printf("Precisa de %.2f para ser aprovado.\n", ((100 - S)/10) );
        }
        else 
            printf("REPROVADO.\n");
    }
}