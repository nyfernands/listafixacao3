#include <stdio.h>
int main(){
    //declaração de variaveis
    int codigo;
    //entrada de dados
    printf("DIGITE O CODIGO REFERENTE AO SEU CARGO: ");
    scanf("%d", &codigo);
    //processamento
    switch(codigo){
    case 1:
        printf("CARGO: ESCRITUARIO. \n DIREITO A AUMENTO DE 50%%");
        break;
    case 2:
        printf("CARGO: SECRETARIO. \n DIREITO A AUMENTO DE 35%%");
        break;
    case 3:
        printf("CARGO: CAIXA. \n DIREITO A AUMENTO DE 20%%");
        break;
    case 4:
        printf("CARGO: GERENTE. \n DIREITO A AUMENTO DE 10%%");
        break;
    case 5:
        printf("CARGO: DIRETOR. \n NAO TEM DIREITO A AUMENTO");
        break;
    default:
        printf("CODIGO INVALIDO");
        }
    return 0;
    }
