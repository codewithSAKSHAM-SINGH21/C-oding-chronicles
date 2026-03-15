#include <stdio.h>

void main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int nst = 2 * n - 1; // stars in first row
    int nsp = 0;         // spaces in middle

    // First row
    for (int i = 0; i < nst; i++) {
        printf("*");
    }
    printf("\n");

    // Next rows
    for (int row = 2; row <= n; row++) {
        nst = n - (row - 1);       // stars on each side
        nsp = (row - 1) * 2 - 1;   // spaces in middle

        // left stars
        for (int i = 0; i < nst; i++) {
            printf("*");
        }
        // middle spaces
        for (int i = 0; i < nsp; i++) {
            printf(" ");
        }
        // right stars
        for (int i = 0; i < nst; i++) {
            printf("*");
        }
        printf("\n");
    }

}