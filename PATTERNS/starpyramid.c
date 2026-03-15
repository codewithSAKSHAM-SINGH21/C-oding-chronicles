#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        
        for(int g = 1; g <= n - i; g++) {
            printf(" ");
        }
        
        for(int j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }
}