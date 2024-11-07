#include <stdio.h>

int main(void) {
    
    int mat[10][10];

    for  (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if  (i == j) {
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }

    printf("Matriz de Identidade 10x10: \n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}