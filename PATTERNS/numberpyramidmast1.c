// #include <stdio.h>

// void main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     int nst = 2 * n - 1; // stars in first row
//     int nsp = 0;         // spaces in middle

//     // First row
//     for (int i = 1; i < nst; i++) {
//         printf("%d", i);
//     }
//     printf("\n");

//     // Next rows
//     for (int row = 2; row <= n; row++) {
//         nst = n - (row - 1);       // stars on each side
//         nsp = (row - 1) * 2 - 1;   // spaces in middle

//         // left stars
//         for (int i = 1; i < nst; i++) {
//             printf("%d", i);
//         }
//         // middle spaces
//         for (int i = 1; i < nsp; i++) {
//             printf(" ");
//         }
//         // right stars
//         for (int i = 1; i < nst; i++) {
//             printf("%d", i);
//         }
//         printf("\n");
//     }

// }


// 



// 



// 

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int nst = n;    // numbers on left side
    int nsp = -1;   // spaces in middle (-1 means no spaces for first row)

    for (int row = 1; row <= n; row++) {
        // Left numbers (ascending)
        for (int i = 1; i <= nst; i++) {
            printf("%d", i);
        }

        // Middle spaces
        for (int i = 1; i <= nsp; i++) {
            printf(" ");
        }

        // Right numbers (descending)
        for (int i = nst; i >= 1; i--) {
            printf("%d", i);
        }

        printf("\n");

        // Update for next row
        nst--;       // shrink left side
        nsp += 2;    // expand spaces
    }

    return 0;
}