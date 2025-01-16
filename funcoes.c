#include <stdio.h>

int soma(int x, int y)
{
    return x + y;
}

int main() {
    int total, n1, n2;
    int *ptr;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    total = soma(n1, n2);
    printf("A soma dos dois numeros e: %d\n", total);
    
    ptr = &total;

    printf("O endereco de total e: %x\n", ptr);

    return 0;
}

