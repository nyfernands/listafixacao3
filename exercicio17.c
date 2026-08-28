#include <stdio.h>
int main(){
    //declaração de variaveis
    int angulo;
    //entrada de dados
    printf("Digite o angulo em graus: ");
    scanf("%d", &angulo);
    //processamento
    if (angulo>360){
        angulo=angulo%360;
    }if (angulo>=0 && angulo<90){
        printf("1º quadrante");
    }else if (angulo>=90 && angulo<180){
            printf("2º quadrante");
        }else if (angulo>=180 && angulo<270){
                printf("3 quadrante");
            }else if (angulo>=270 && angulo<=360){
                    printf("4º quadrante");
                }else if (angulo<0 && angulo>-90){
                        printf("1º quadrante");
                    }else if (angulo<=-90 && angulo>-180){
                            printf("2º quadrante");
                        }else if (angulo<=-180 && angulo>-270){
                                printf("3º quadrante");
                            }else if (angulo<=-270 && angulo>=360){
                                    printf("4º quadrante");
                }
   return 0;
}
