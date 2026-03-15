#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        for(int g = 1; g <= n - i; g++) {
            printf("  ");
        }
        // Print numbers
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for(int k = i-1;k >= 1; k--){
            printf("%d ", k);
        }
        printf("\n");
    }
}