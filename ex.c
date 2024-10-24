#include <stdio.h>
/*
Calcule a média dos produtos vendidos em cada ano, 2020, 2021, 2022.
*/

int main(void) {
    int prod2020, prod2021, prod2022;
    float media;

    printf("Digite a quantidades de produtos vendidos em 2020: ");
    scanf("%d", &prod2020);
    printf("Digite a quantidades de produtos vendidos em 2021: ");
    scanf("%d", &prod2021);
    printf("Digite a quantidades de produtos vendidos em 2022: ");
    scanf("%d", &prod2022);
    media = (prod2020 + prod2021 + prod2022) / 3;
    printf("\nA media dos produtos vendidos em cada ano sera de: %.f", media);

    return 0;
}