#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * fatorial(n - 1);
    }
}

int main()  {

    int number;

    printf("Digite um numero para descobrir seu fatorial: ");
    scanf("%d", &number);
    
    printf("O fatorial de %d e: %d\n", number, fatorial(number));

    return 0;
}