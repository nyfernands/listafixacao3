#include <stdio.h>
int main(){
    //declaração de variaveis
    int idade;
    //entrada de dados
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    //processamento
    if (idade>=18){
    printf("Voce atingiu a maioridade.");
    }else{
    printf("Voce nao atingiu a maioridade.");
    }
    return 0;

    }
