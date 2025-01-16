#include <stdio.h>

struct Paciente {
    int idade;
    char nome[50];
    char sexo[10];
};

void imprimePaciente(struct Paciente paciente) {
    printf("----------------------\n");
    printf("Nome: %s\n", paciente.nome);
    printf("Idade: %d\n", paciente.idade);
    printf("Sexo: %s\n", paciente.sexo);
    printf("----------------------\n");
}

int main() {

    struct Paciente listaPaciente[2]; // Alterado para 2

    for (int i = 0; i < 2; i++){
        printf("Digite seu nome: ");
        scanf("%s", listaPaciente[i].nome);
        printf("Digite sua idade: ");
        scanf("%d", &listaPaciente[i].idade);
        printf("Digite seu sexo: ");
        scanf("%s", listaPaciente[i].sexo);
    }

    for (int i = 0; i < 2; i++){
        imprimePaciente(listaPaciente[i]);
    }  

    return 0;
}