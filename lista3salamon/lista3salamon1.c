/* 1)Você  foi  contratado  por  uma  empresa  de  estatística  para  pesquisar  a  distâncias 
registradas no velocímetro dos automóveis que passam por uma rodovia.
O programa deverá ler a quilometragem informada e perguntar: “Deseja realizar nova leitura (S/N)?”.
O  programa   deverá   validar   se   as   entradas   são   válidas:   Não   permitir 
quilometragens menores ou iguais a zero e a resposta da pergunta deve ser igual a S ou N.
Ao final da pesquisa o programa deverá informar: a quantidade de carros pesquisados, 
a quilometragem total e a quantidade de dados inválidos digitados pelo usuário. */


#include <stdio.h>  


int main() {

    int invalido = 0, total_carros = 0, i = 1;
    float quilometragem, quilometragem_total = 0;
    char resposta;
    do {
        printf("Digite aqui o valor da quilometragem: ");
        while (1){
            scanf("%f", &quilometragem);
            if (quilometragem > 0){
                total_carros++;
                break;
            }
            else {
                printf("Valor inserido invalido.\nDeve ser maior que zero.\n");
                invalido++;
            }
        }
        printf("Deseja realizar nova leitura (S/N)?\n");
        while (1){
            scanf(" %c", &resposta);
            if (resposta == 'S')
                break;
            else {
                if (resposta == 'N')
                    break;
                else {
                    printf("Resposta invalida.\n");
                    invalido++;
                }
            }
        }
        quilometragem_total = quilometragem + quilometragem_total;
        if (resposta == 'N')
            i = 0;
    }
    while (i);
    printf("Total de carros pesquisados: \t%d\n", total_carros);
    printf("Quilometragem total: \t\t%.2f\n", quilometragem_total);
    printf("Quantidade de dados invalidos: \t%d\n", invalido);


}