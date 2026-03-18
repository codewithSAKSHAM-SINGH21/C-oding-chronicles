#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int J = 1;J<=n-i;J++){
            printf(" ");
        }
        // Print alphabets
        for(int K = 0; K <= i; K++) {
            printf("%c", 'A' + K);
        }
        {
            printf("\n");
        }
       
    }
}




