#include <stdio.h>
#include <string.h>
int main() {
//declaração de variaveis
    char senha[50];
    //entrada de dados
    printf("Digite a senha: ");
    scanf ("%s", senha);
    //processamento
    if (strcmp(senha, "ASDFG") == 0){
    printf("Acesso liberado");
    }else{
    printf("Acesso negado");
    }

return 0;

}
