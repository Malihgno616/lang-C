#include <stdio.h>
#include <string.h>

int main() {

    char cpf[11], nome[100];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    if (strlen(nome) > 100 && strlen(nome) < 0) {
        printf("Nome invalido, insira um nome com no maximo 100 caracteres.\n");
    }

    printf("Digite seu CPF: ");
    scanf("%s", &cpf);

    if  (strlen(cpf) != 11 || strlen(cpf) > 11) {
        printf("CPF  invalido");
    }

    printf("CPF cadastrado com sucesso!!");
    
    return 0;
}
