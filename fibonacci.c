#include <stdio.h>

int main() {
    int n;
    int termo1 = 0, termo2 = 1, termo3;
    
    printf("Quantos termos voce deseja? ");
    scanf("%d", &n);
    
    printf("Sequencia de Fibonacci ate o termo %d:\n", n);
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            termo3 = termo1; // First term
        } else if (i == 1) {
            termo3 = termo2; // Second term
        } else {
            termo3 = termo1 + termo2; // Calculate next term
            termo1 = termo2; // Update termo1 to the last term
            termo2 = termo3; // Update termo2 to the current term
        }
        printf("%d\n", termo3); // Print the current term
    }
    
    return 0;
}