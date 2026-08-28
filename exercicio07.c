#include <stdio.h>
int main(){
    //declaração de variaveis
    int idade;
    //entrada de dados
    printf("Qual a sua idade? \n");
    scanf("%d", &idade);
    //processamento
    if (idade>=5){
        if (idade>=5 && idade<=7){
        printf("Sua categoria e infantil A");
    }else if (idade>=8 && idade<=10){
        printf("Sua categoria e infantil B");
            }else if (idade>=11 && idade<=13){
                printf("Sua categoria e juvenil A");
                    }else if (idade>=14 && idade<=17){
                        printf("Sua categoria e juvenil B");
                        }else if (idade>=18){
                            printf("Sua categoria e senior");
        }
    }else{
        printf("Sem categoria definida para essa idade");
    }
        return 0;

}
