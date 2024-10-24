#include <stdio.h>

int main(void) {  
    float preco;
    const float real = 5.50;
    float total;
    printf("Digite o preco do seu produto: ");
    scanf("%f", &preco);
    printf("O preco so produto em dolar: %.2f", preco); 
    total = preco * real;
    printf("\nO preco em reais sera : %.2fR$", total);
    return 0;
}

// Operadores aritmeticos
/*
()
x++ e x-- 
x += y
x -= y
x *= y
x /= y
x %= y
<
<= 
>=
==
!=
*
/
%
+
-
&&
||
!
*/


/*Operadores Unários

*/