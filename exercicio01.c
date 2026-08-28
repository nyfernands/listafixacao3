#include <stdio.h>
int main (){
    //declaração de variaveis
    float n1, n2,n3, n4, media;
    //entrada de dados
    printf("DIGITE AS SUAS NOTAS ABAIXO DE 0 A 10. \n");
    printf("Nota 1:");
    scanf("%f", &n1);
    printf("Nota 2:");
    scanf("%f", &n2);
    printf("Nota 3:");
    scanf("%f", &n3);
    printf("Nota 4:");
    scanf("%f", &n4);
    //processamento de dados
     if (n1 >= 0 && n1 <= 10 &&
        n2 >= 0 && n2 <= 10 &&
        n3 >= 0 && n3 <= 10 &&
        n4 >= 0 && n4 <= 10) {

        media = (n1 + n2 + n3 + n4) / 4;

        if (media >= 7) {
            printf("O aluno esta aprovado");
        } else {
            printf("O aluno esta reprovado");
        }

    } else {
        printf("Existe alguma nota invalida");
    }

    return 0;
}
