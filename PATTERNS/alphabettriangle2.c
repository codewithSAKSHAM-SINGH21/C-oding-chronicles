#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    char ch = 'A';
    for(int i =1;i<=n;i++){
       
        for(int j = 1;j<=i;j++){
            printf(" ");
              
        }
        for(int k =1;k<=i;k++){
             printf("%c ",ch);
            ch++;  
        }
        {
            printf("\n");
        }
       
    }
}
