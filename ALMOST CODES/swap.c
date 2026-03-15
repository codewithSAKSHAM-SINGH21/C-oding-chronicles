#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Before swapping
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping logic
    temp = a;  // Store value of a in temp
    a = b;     // Assign value of b to a
    b = temp;  // Assign value of temp (original a) to b

    // After swapping
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}