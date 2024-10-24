#include <stdio.h>

int main() {
    int idade, soma = 0,  cont = 0;
    
    while(1) {
        printf("Digite a idade da pessoa (0 para sair): ");
        scanf("%d",  &idade);

        if (idade == 0) {
            break;
        }

        if (idade < 0) {
            printf("Idade invalida");
        }

        soma += idade;
        cont++;

    }

    if (cont > 0) {
        float media = (float) soma / cont; // casting
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nao foram digitadas idades.\n");
    }

    return 0;
}