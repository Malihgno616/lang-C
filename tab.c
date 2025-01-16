#include <stdio.h>

int gerarTabuada(int n){
    int i;
    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    gerarTabuada(num);

}