#include <stdio.h>
int main(){
    //declaração de variaveis
    float salario, reajuste;
    //entrada de dados
    printf("Qual o valor do seu salario? ");
    scanf("%f", &salario);
    //processamento
    if (salario<=500){
    reajuste = salario + (salario*0.3);
    printf("O valor reajustado do seu salario e %.2f", reajuste);
    }else{
    printf("Voce nao tem direito a reajuste de salario");
    }
    return 0;
}
