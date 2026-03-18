#include<stdio.h>

int main(){
    int z;
    printf("Enter a number: ");
    scanf("%d", &z);
    int n;
    printf("Enter another number: ");
    scanf("%d", &n);
    int sum = z + n;
    printf("The sum of %d and %d is: %d\n", z, n, sum);
    
    return 0;
}