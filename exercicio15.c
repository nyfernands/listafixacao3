#include <stdio.h>
#include <math.h>

int main(){
    //declaracao de variaveis
    int opcao;
    float n1, n2, resultado;
    //entrada de dados
    printf("MENU DE OPCOES:\n");
    printf("1-SOMA\n");
    printf("2-RAIZ QUADRADA\n");
    printf("3-FINALIZAR\n");
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);
    //processamento
    switch (opcao){
    case 1:
        printf("OPCAO SELECIONADA: SOMA\n");
        printf("DIGITE OS NUMEROS ABAIXO:\n");
        printf("NUMERO: ");
        scanf("%f", &n1);
        printf("NUMERO: ");
        scanf("%f", &n2);
        resultado = n1 + n2;
        printf("O resultado e %.2f", resultado);
        break;
    case 2:
        printf("OPCAO SELECIONADA: RAIZ QUADRADA\n");
        printf("DIGITE O NUMERO: ");
        scanf("%f", &n1);
        resultado = sqrt(n1);
        printf("O resultado e %.2f", resultado);
        break;
    case 3:
        break;
    default:
        printf("OPCAO INVALIDA");
    }

    return 0;
    }
