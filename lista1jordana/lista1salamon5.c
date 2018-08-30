/* A  Federação  de  Futebol  contratou  você  para  escrever  um  programa  para  fazer  uma 
estatística de vários jogos (Flamengo e Vasco). Escreva um algoritmo para ler o número 
de gols marcados pelo Flamengo e o número de gols marcados pelo Vasco em um jogo, 
imprimindo o nome do vencedor ou a palavra EMPATE. Logo
após imprima a mensagem 
“Novo jogo (1 – Sim;  2 – Não)?”. Se a resposta for 1 o algoritmo deve ser executado 
novamente solicitando o número de gols marcados em uma nova partida, caso contrário 
deve ser encerrado e impresso:
a.Quantos jogos fizeram parte da estatística.
b.O número de vitórias do Flamengo.
c.O número de vitórias do Vasco.
d.O número de empates.
e.Uma mensagem indicando qual time venceu o maior número de jogos ou NÃO HOUVE VENCEDOR.*/

#include <stdio.h>

int main ()
{
    int flamengo, vasco, escolha = 0, partidas = 1, vf, vv, empate = 0;
    vv = vf = 0;                                                                       
    printf("\t------ FLAMENGO X VASCO ------\n");
    while (1) {
        if (escolha >= 2)
            break;
        printf("Resultado do jogo:\nFlamengo: ");
        scanf("%d", &flamengo);
        if (flamengo<0)
            printf("Numero Invalido.\n");
            break;
        printf("Vasco: ");
        scanf("%d", &vasco);
        if (vasco<0)
            printf("Numero Invalido.\n");
            break;
        if (flamengo>vasco)
            vf = 1 + vf;
        else 
            if (flamengo == vasco)
                empate = 1 + empate;
            else
                vv = 1 + vv;
        printf("Novo jogo?\nDigite 1 para SIM, e 2 para NAO: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1: partidas = 1 + partidas;
                continue;
            case 2 :
                printf("-Não\nNumero de jogos disputados: \t%d\n", partidas);
                printf("Vitorias do Flamengo: \t\t%d\nVitorias do Vasco: \t\t%d\n", vf, vv);
                printf("Numero de empates: \t\t%d\n", empate);
                break;
            default:
                printf("NUMERO INVALIDO\n");
        if (escolha == 2) {
            if (vf > vv)
                escolha = escolha;
            else {
                if (vf == vv)
                    escolha = escolha + 1;
                else 
                    escolha = escolha + 3;
        }
        }
        switch (escolha)
            case 2:
                printf("O Flamengo venceu!\n");
                break;
            case 3: 
                printf("O Vasco venceu!\n");
                break;
            case 4:
                printf("Nao houve vencedor.\n");
                break;
        }
    }
}