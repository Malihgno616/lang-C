#include <stdio.h>

int gerarFatorial(int num) {
    for(int i = 0; i <num;i--) {
        num = i;
        
    }
}

int main() {
    int numero;

    printf("Digite um numero para gerar fatorial: ");
    scanf("%d", &numero);

    gerarFatorial(numero);

    return 0;
}