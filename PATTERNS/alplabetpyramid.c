#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int g = 1; g <= n - i; g++) {
            printf("  ");
        }
        // Print numbers
        for(int j = 1; j <=2*i-1; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
}