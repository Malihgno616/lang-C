#include <stdio.h>

int main(void) {
    //Praticando a utilização de vetores de string
    char frase[101];

    printf("\n Digite uma frase:");

    fflush(stdin);

    fgets(frase, 101,  stdin);

    printf("A frase digitada foi: %s", frase);


    return 0;
}