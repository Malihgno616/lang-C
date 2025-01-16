#include <stdio.h>

int gerarTabuada(int num) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int numero;

    printf("Digite um numero para gerar uma tabuada: ");
    scanf("%d", &numero);

    gerarTabuada(numero);

    return 0;
}