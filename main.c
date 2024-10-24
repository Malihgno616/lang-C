/*Sabendo disso, uma pizzaria do bairro onde mora o procurou, pois gostaria de automatizar seu caixa. A princípio, foi lhe solicitado apenas implementar um cálculo simples, em que, dado o valor total da conta de uma mesa, o programa divide esse valor pela quantidade de integrantes da mesa e calcula o desconto concedido. O programa deve receber como dados o valor da conta, a quantidade de pessoas e o percentual de desconto (%). Com os dados no programa, como deverá ser feito o cálculo do valor total da conta com o desconto e o valor que cada pessoa deverá pagar?*/

#include<stdio.h>

int main(){

    float valor_bruto=0;

    float valor_liquido=0;

    float desconto=0;

    int qtd_pessoas=0;

    printf("\n Digite o valor total da conta: ");

    scanf("%f",&valor_bruto);

    printf("\n Digite a quantidade de pessoas: ");

    scanf("%d",&qtd_pessoas);

    printf("\n Digite o desconto (em porcentagem): ");

    scanf("%f",&desconto);

valor_liquido = valor_bruto - (valor_bruto * desconto/100);

    printf("\n Valor da conta com desconto = %.2f",valor_liquido);

    printf("\n Valor a ser pago por pessoa = ");

    printf("%.2f", valor_liquido/qtd_pessoas);

}




