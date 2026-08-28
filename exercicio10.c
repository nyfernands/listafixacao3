#include <stdio.h>
int main () {
    //declaracao variaveis
    int numero;
    //entrada de dados
    printf("Digite um numero:");
    scanf("%d", &numero);
    //processamento
    if (numero % 2 == 0) {
        printf("%d e par", numero);
    }else{
        printf("%d e impar", numero);
        }
    return 0;


}
