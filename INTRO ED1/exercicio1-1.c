// Exercicio 1.1 introdução a estrutura de dados Celes Cerqueira Rangel
#include <stdio.h>

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y){
	if (x >= x0 && x<= x1 && y >= y0 && y <= y1)
		return 1;
	else
		return 0;
}
int main (){
	printf("%d\n", dentro_ret(0, 0, 2, 3, -1, 0));
}