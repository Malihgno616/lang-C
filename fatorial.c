#include <stdio.h>

int numeroFatorial(int n) {
    int fatorial = 1;

    if (n == 0) {
        return 1;
    } else {
        for (int i = n; i > 1; i--) {
            fatorial = fatorial * i;
        }
    }
    return fatorial;
}

int main() {
    int number;

    printf("Digite um numero positivo: ");
    scanf("%d", &number);   

    if (number < 0) {
        printf("Erro: Numero invalido");
    } else {
        printf("\nResultado: %d", numeroFatorial(number));
    }   
    return 0;
}