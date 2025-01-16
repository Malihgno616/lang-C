#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int somarMedia(float n1, float n2) {
    return (n1 + n2) /2;
} 

void exibirAluno(struct Aluno aluno);

int main() {
    float nota1, nota2, media;
    struct Aluno aluno1;
    
    aluno1.idade = 24;
    
    strcpy(aluno1.nome,"Joao");
    
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    media = somarMedia(nota1, nota2);
    aluno1.media = media;      

    exibirAluno(aluno1);

    return 0;
}

void exibirAluno(struct Aluno aluno) {
    
    printf("\nNome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Media do aluno: %.2f\n", aluno.media);
    printf("\n");
}

