#include <stdio.h>

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int g = 1; g <= n - i; g++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int g = 1; g <= n - i; g++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    
}