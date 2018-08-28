


#include <stdio.h> 

int main ()
{
    int idade;
    char resposta;
    float total;
    printf("Digite aqui a idade do paciente: ");
    scanf("%d", &idade);
    if (idade < 0) 
        printf("***** ERRO *****\nIDADE INVALIDA\n");
    else {
        printf("O paciente possui alguma doenca cronica?\n");
        scanf(" %c", &resposta);
        if (idade<=18) {
            total = 83.15;
            printf("O valor pago na mensalidade será de: %.2f\n", total);
        }
        else { 
            if (idade <= 33) {
                total = 133.88;
                if (resposta != 'S' && resposta != 's' && resposta != 'N' & resposta != 'n')
                    printf("*****RESPOSTA INVALIDA*****\n");
                switch (resposta) {
                    case ('S'): printf("O valor pago na mensalidade será: %.2f\n", 1.3*total);
                        break;
                    case ('s'): printf("O valor pago na mensalidade será: %.2f\n", 1.3*total);
                        break;
                    case ('N'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                        break;
                    case ('n'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                        break;
                }
            }
            else {
                if (idade <= 44) {
                    total = 203.73;
                    if (resposta != 'S' && resposta != 's' && resposta != 'N' & resposta != 'n')
                        printf("*****RESPOSTA INVALIDA*****\n");
                    switch (resposta) {
                        case ('S'): printf("O valor pago na mensalidade será: %.2f\n", 1.1*total);
                            break;
                        case ('s'): printf("O valor pago na mensalidade será: %.2f\n", 1.1*total);
                            break;
                        case ('N'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                            break;
                        case ('n'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                            break;
                    }
                }
                else {
                    if  (idade <= 58) {
                        total = 312.44;
                        if (resposta != 'S' && resposta != 's' && resposta != 'N' & resposta != 'n')
                            printf("*****RESPOSTA INVALIDA*****\n");
                        switch (resposta) {
                            case ('S'): printf("O valor pago na mensalidade será: %.2f\n", 1.15*total);
                                break;
                            case ('s'): printf("O valor pago na mensalidade será: %.2f\n", 1.15*total);
                                break;
                            case ('N'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                                break;
                            case ('n'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                                break;
                        }
                    }
                    else {
                        total = 498.93;
                        if (resposta != 'S' && resposta != 's' && resposta != 'N' & resposta != 'n')
                            printf("*****RESPOSTA INVALIDA*****\n");
                        switch (resposta){
                            case ('S'): printf("O valor pago na mensalidade será: %.2f\n", 1.3*total);
                                break;
                            case ('s'): printf("O valor pago na mensalidade será: %.2f\n", 1.3*total);
                                break;
                            case ('N'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                                break;
                            case ('n'): printf("O valor pago na mensalidade sera: %.2f\n", total);
                                break;
                        }
                    }
                }
            }
        }
    }
}

