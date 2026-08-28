#include <stdio.h>
int main(){
    //declaração de variaveis
    float salario, reajuste;
    //entrada de dados
    printf("Qual e o seu salario? ");
    scanf("%f", &salario);
    //processamento
    if (salario<=300) {
    reajuste=salario+(salario*0.5);
    printf("Seu salario reajustado e:%.2f",reajuste);
    }else{
    reajuste=salario+(salario*0.3);
    printf("Seu salario reajustado e:%.2f",reajuste);
    }
    return 0;
}
