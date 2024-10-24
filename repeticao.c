#include <stdio.h>
// Estrutura de repetição

int main() {
    int numero, x, res; 
    x = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (x <= 10) {
        res = numero  * x;
        printf("\n%d x %d = %d", numero, x, res);
        x = x + 1;
    }

    return 0;
}