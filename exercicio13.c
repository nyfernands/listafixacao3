#include <stdio.h>
int main(){
    //declaracao de variaveis
    int idade;
    //entrada de dados
    printf("DIGITE SUA IDADE: ");
    scanf("%d", &idade);
    //processamento
    if (idade>=0){
        if (idade>=0 && idade<=2){
            printf("RECEM-NASCIDO");
        }else if (idade<=11){
                printf("CRIANCA");
            }else if (idade<=19){
                    printf("ADOLESCENTE");
                }else  if (idade<=55) {
                        printf("ADULTO");
                            }else{
                                printf("IDOSO");
                                }
    }else{
        printf("IDADE INVALIDA");
        }
    return 0;
    }
