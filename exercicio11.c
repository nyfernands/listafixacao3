#include <stdio.h>
int main(){
    //declaração variaveis
    float n1, n2;
    //entrada de dados
    printf("DIGITE DOIS NUMEROS ABAIXO:\n");
    printf("Primeiro numero: ");
    scanf("%f", &n1);
    printf("Segundo numero: ");
    scanf("%f", &n2);
    //processamento
    if (n1>n2) {
        printf("O numero %.2f e o menor", n2);
    }else if (n2>n1){
        printf("O numero %.f e o menor", n1);
        }else{
            printf("Os numeros sao iguais");
            }
    return 0;
        }
