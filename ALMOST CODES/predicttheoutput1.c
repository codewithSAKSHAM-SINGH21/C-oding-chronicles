#include<stdio.h>

int main(){
    int f,g;
    printf("Enter two numbers: ");
    scanf("%d %d", &f, &g);
    printf("The product of %d and %d is: %d\n", f, g, f*g);
    return 0;
}