#include <stdio.h>
int main (){
    //declaração de variaveis
    float lab, av, ef, media;
    //entrada de dados
    printf("DIGITE SUAS NOTAS:\n");
    printf("Qual sua nota no trabalho de laboratorio? ");
    scanf("%f", &lab);
    printf("Qual sua nota na avaliacao semestral? ");
    scanf("%f", &av);
    printf("Qual sua nota no exame final? ");
    scanf("%f", &ef);

    //processamento
    media = ((lab * 2) + (av * 3)+ (ef*5))/10 ;
    if (lab>=0 && lab <= 10 && av>=0 && av <= 10 && ef>=0 && ef <= 10){
        if (media>=8 && media<=10){
            printf("Sua media e %.2f, e voce esta no conceito A", media);
        }else if (media>=7 && media<8){
                printf("Sua media e %.2f, e voce esta no conceito B", media);
              }else if (media>=6 && media<7) {
                      printf("Sua media e %.2f, e voce esta no conceito C", media);
                    }else if (media>=5 && media<6){
                            printf("Sua media e %.2f, e voce esta no conceito D", media);
                           }else{
                                printf("Sua media e %.2f, e voce esta no conceito E", media);
                            }

    }else{
        printf("Existe alguma nota invalida. ");
        }

    return 0;
}
