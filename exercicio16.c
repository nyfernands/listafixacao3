#include <stdio.h>
int main(){
    //declaracao de variaveis
    int idade;
    char grupo;
    //entrada de dados
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Qual o seu grupo de risco(b, m ou a)? ");
    scanf(" %c", &grupo);
    //processamento
    if (idade<18 || idade>70){
        printf("Sem direito a seguro");
    }else if (idade<=24){
        switch (grupo){
        case 'b':
            printf("CODIGO 7");
            break;
        case 'm':
            printf("CODIGO 8");
            break;
        case 'a':
            printf("CODIGO 9");
            break;
        default:
            printf("GRUPO DE RISCO INVALIDO");
        }
            }else if (idade<=40){
                switch (grupo){
                case 'b':
                    printf("CODIGO 4");
                    break;
                case 'm':
                    printf("CODIGO 5");
                    break;
                case 'a':
                    printf("CODIGO 6");
                    break;
                default:
                    printf("GRUPO DE RISCO INVALIDO");
                }
                    }else{
                        switch (grupo){
                            case 'b':
                                printf("CODIGO 1");
                                break;
                            case 'm':
                                printf("CODIGO 2");
                                break;
                            case 'a':
                                printf("CODIGO 3");
                                break;
                            default:
                                printf("GRUPO DE RISCO INVALIDO");
                            }
                        }
 return 0;
        }
