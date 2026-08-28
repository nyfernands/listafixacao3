#include <stdio.h>

int main(){
    //declaracao de variaveis
    int codigo;
    float preco;

    //entrada de dados
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    //processamento
    printf("O preco do e R$%.2f.\n", preco);
    printf("Procedencia: ");
    switch (codigo){
    case 1:
        printf("Sul.\n");
        break;
    case 2:
        printf("Norte.\n");
        break;
    case 3:
        printf("Leste.\n");
        break;
    case 4:
        printf("Oeste.\n");
        break;
    case 5:
    case 6:
        printf("Nordeste.\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("Sudeste.\n");
        break;
    default:
    if (codigo>=10 && codigo<=20){
        printf("Centro-oeste.\n");
    }else if (codigo>=21 && codigo<=30){
        printf("Nordeste.\n");
            }else{
                printf("Codigo invalido");
                }

    }

    return 0;

}

