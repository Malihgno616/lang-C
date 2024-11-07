/*
Declare uma variável para armazenar um valor real, já que o peso pode não ser um número inteiro.

Armazene o resultado da função na variável criada.

Compare o valor armazenado com a primeira condição para verificar se o guindaste a ser utilizado é o G1. Se for o caso, imprima uma mensagem para o usuário.

Crie uma estrutura condicional encadeada com a primeira, comparando o valor armazenado com a terceira condição, para determinar se o guindaste a ser utilizado é o G3. Em caso afirmativo, exiba uma mensagem para o usuário.

Adicione um bloco "senão" ao final, pois se o peso não corresponder a nenhuma das condições anteriores, o guindaste a ser utilizado será o G2. Nesse caso, também emita uma mensagem para o usuário.

Crie uma função para calcular o peso antes da função main().

Declare três variáveis para armazenar os valores da base, altura e comprimento.

Solicite ao usuário que insira os valores e armazene-os nas variáveis criadas.

Calcule o peso da coluna usando a fórmula fornecida pelos engenheiros. */

#include <stdio.h>

int calcularPeso() {
    float b, h, c;

    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &h);
    printf("Digite o comprimento: ");
    scanf("%f", &c);

    return (int)(b * h *c * 25);
}

int main() {

    float peso = 0;

    peso = calcularPeso();

    if (peso <= 500) {
        printf("Precisa-se de um guindaste G1.\n");
    } else if (peso >= 1500 ) {
        printf("Precisa-se de um guindaste G2.\n");
    } else {
        printf("Precisa-se de um guindaste G3.\n");
    }
    return 0;
}