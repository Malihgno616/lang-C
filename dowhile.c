#include <stdio.h>
#include <string.h>

int main() {
    char nomeUsuario[100], senhaUsuario[100];

    do {
        printf("Digite o nome  do usuario: ");
        scanf("%s", &nomeUsuario);
        printf("Digite a senha do usuario: ");
        scanf("%s", &senhaUsuario);

        if (strcmp(senhaUsuario, nomeUsuario) == 0) {
            printf("A senha nao pode ser igual a o nome do usuario");
        }

    } while(senhaUsuario, nomeUsuario == 0);

    printf("Cadastro realizado com sucesso!!!\n");
    return 0;
}