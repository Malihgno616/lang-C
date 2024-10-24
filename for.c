#include <stdio.h>

int main(void) {
    int x, z;
    long int res = 1;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    for (int i = 0 ; i < z;  i++) {
        res = res * x;
        if (z == 0 ) {
            res = 1;
            printf("O numero %d elevado a %d e igual a %ld\n", x, z, res);
        }
    }

    printf("O numero %d elevado a %d e igual a %ld\n", x, z, res);

    return 0;
}