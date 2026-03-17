#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int size = 2 * n - 1;  // total rows and columns

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            // minimum distance from any border
            int min = top;
            if (left < min) min = left;
            if (bottom < min) min = bottom;
            if (right < min) min = right;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}