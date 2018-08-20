/* d) Verificar se o ponto P = (1,2) pertence ao círculo de raio 3
e centro 3. Se pertencer, seu programa deve emitir a mensagem "O ponto 
(1,2) pertence ao circulo de raio 3 e centro (3,3)." Senão, deve emitir 
a mensagem "O ponto (1,2) nao pertence ao circulo de raio 3 e centro (3,3)."
 ~~(x-3)² + (y-3)² = 9~~*/
#include <stdio.h>

int main () 
{ 
    //float X, Y;
   // scanf("%f", &X);
   // scanf("%f", &Y);
    int X = 1, Y = 2;
    if ((X-3)*(X-3) + (Y-3)*(Y-3) <= 9) {
        printf("O ponto (1,2) pertence ao circulo de raio 3 e centro (3,3).");
    }
    else {
        printf("O ponto (1,2) nao pertence ao circulo de raio 3 e centro (3,3).");
    }
}