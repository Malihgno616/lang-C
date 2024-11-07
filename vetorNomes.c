#include <stdio.h>

int main() {

    int i;
    int idade[] = {12,23,43,55};
    float altura[] = {1.55,1.87,1.90,1.77};

    for (i  = 0; i < 4; i++) {
        printf("Idade: %d\n", idade[i]);
        printf("Altura: %.2f\n", altura[i]);
    }

    return 0;
}