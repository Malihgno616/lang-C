#include <stdio.h>

/*Prezado estudante, é hora de aplicar todo o conhecimento adquirido até aqui! Vale lembrar que a sua tarefa era criar um programa em linguagem C que determine o salário líquido de cada colaborador, considerando as deduções do INSS e Imposto de Renda conforme especificado nas Tabelas 1 e 2.

O cálculo das alíquotas do INSS e IR são feitas de forma indireta, dividindo o salário de acordo com as faixas e aplicando cada porcentagem na parte específica do salário. Por exemplo: em um salário de 1.500,00, incide 7,5% em cima de 1.320,00 (primeira faixa), e incide 9% em cima de 180,00 (que é o que excede a primeira faixa salarial). Porém, para simplificar os cálculos, vamos resolver este problema de forma direta, ou seja, aplicando a porcentagem no salário total. Por exemplo: em um salário de 1.500,00, como ele está entre 1.320,00 e 2.571,29, incide a taxa de 9% sobre todo o salário. O cálculo do IR também não é feito de forma direta, mas para simplificar também vamos aplicar o desconto de forma direta, ou seja, aplicando a porcentagem no salário total. */

int main(void) {

    float  salario, salario_liquido;

    // Cálculo do desconto INSS

    printf("Digite o seu salario bruto: ");
    scanf("%f", &salario);

    if (salario <= 1412.00) {
        salario_liquido = salario - (salario * 0.075);
        printf("Salario descontado do INSS: %.2fR$", salario_liquido);
    } else if (salario <= 2700.00) {
        salario_liquido = salario - (salario * 0.09);
        printf("Salario descontado do INSS: %.2fR$", salario_liquido);
    } else if (salario <= 4000.00) {
        salario_liquido = salario - (salario * 0.12);
        printf("Salario descontado do INSS: %.2fR$", salario_liquido);
    } else if (salario <= 7800.00 || salario >= 7800.00) {
        salario_liquido = salario - (salario * 0.14);
        printf("Salario descontado do INSS: %.2fR$", salario_liquido);
    }
    
    return 0;
}