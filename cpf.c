#include <stdio.h>

int main() {

    char cpf1[15];
    char cpf2[12] = "";
    int i = 0, n = 0;

    printf("Digite seu CPF em forma de NNN.NNN.NNN-NN: ");
    scanf("%s", cpf1);


    for(i=0; i<14; i++) {
        if (cpf1[i] == '.' || cpf1[i] == '-') {
            continue;
        } else {
            cpf2[n] = cpf1[i];
            n++;
        }
    }

    printf("\nCPF formatado: %s", cpf2);


    return 0;
}