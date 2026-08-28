#include <stdio.h>
int main(){
    //declaração de variaveis
    float n1, n2, n3, media;
    //entrada de dados
    printf("DIGITE SUAS NOTAS DE 0 A 10 ABAIXO:\n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    //processamento
    if (n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10 && n3 >= 0 && n3 <= 10) {
        media = (n1+n2+n3)/3;
        if (media>=0 && media<5){
            printf("ALUNO REPROVADO");
        }else if(media>=5 && media<7){
            printf("ALUNO PRECISARA FAZER EXAME");
                }else{
                    printf("ALUNO APROVADO");
                    }
    }else{
        printf("NOTA INVALIDA");
        }
    return 0;

    }
