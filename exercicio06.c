#include <stdio.h>
int main(){
    //declaração de variaveis
    float altura, peso;
    char sexo;
    //entrada de dados
    printf("Qual o seu sexo? M/F \n");
    scanf("%c", &sexo);
    printf("Qual a sua altura em metros? \n");
    scanf("%f", &altura);
    //processamento
    if (sexo=='M'||sexo=='m'||sexo=='F'||sexo=='f'){
        if(sexo=='M'||sexo=='m'){
            peso=(72.7*altura)-58;
            printf("Seu peso ideal e: %.2f ",peso);
        }else{
            peso=(62.1*altura)-44.7;
            printf("Seu peso ideal e: %.2f ",peso);
        }
    }else{
        printf("Sexo indefinido.");
    }
    return 0;
}
