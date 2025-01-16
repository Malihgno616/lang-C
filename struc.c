#include <stdio.h>
#include <string.h>

struct Roupa {
    char tamanho[1];
    char cor[50];
    char tipo[50];
};

int main() {

    struct Roupa roupa1;

    strcpy(roupa1.tamanho, "P");
    strcpy(roupa1.cor, "Azul");
    strcpy(roupa1.tipo, "Camisa");
    
    printf("\nTamanho da roupa: %s",roupa1.tamanho);
    printf("\nCor da roupa: %s",roupa1.cor);
    printf("\nTipo da roupa: %s",roupa1.tipo);


    return 0;
}