#include <stdio.h>

int main() {
    int num, fact = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= num) {
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}