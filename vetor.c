#include <stdio.h>

int main() {

    int i, num[5];

    for(i = 0; i < 5; i++) {
        printf("Digite um numero na posicao %d: ", i);
        scanf("%d", &num[i]);
    }
    
    for(i = 4; i >= 0; i--) {
        printf(" %d ",  num[i]);         
    }

    return 0;
}