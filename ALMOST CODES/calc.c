#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    // Ask user for operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to consume any leftover newline

    // Ask user for two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform calculation based on operator
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.d / %.d = %.2d\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}