/* Recursividade: É uma estratégia pode ser utilizada sempre que uma função f pode ser escrita em função dela própria.*/

/* Exemplo: Fatorial */

#include <stdio.h>

void decimalParaBinario(int decimal) {
    if (decimal > 0) {
        decimalParaBinario(decimal /2);
        printf("%d", decimal % 2);
    }
}

int main() {
    
    int numeroDecimal;

    printf("\nDigite um numero decimal: ");
    scanf("%d", &numeroDecimal);

    if (numeroDecimal >= 0) {
        decimalParaBinario(numeroDecimal);
        printf("\n");
    } else {
        printf("Digite um numero decimal positivo.\n");
    }

    return 0;
}