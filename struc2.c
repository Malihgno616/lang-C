#include <stdio.h>
#include <string.h>

typedef struct {
     char nome[50];
     int idade;

} Pessoa;

int main() {
    // variaveis de ponteiro
    Pessoa p1;
    
    strcpy(p1.nome, "Oriel Dorival da Silva");
    p1.idade = 45;

    char *nome = p1.nome;
    int  *idade = &p1.idade;

    printf("\nNome da pessoa:%s\nIdade da pessoa:%d\n", p1.nome, p1.idade);
    printf("\nEndereco da variavel nome: %p\n", &nome);
    printf("Endereco da variavel idade: %p\n", &idade);

    return 0;
}