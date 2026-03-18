#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
           int s = n/2 +1;
              if(j==s || i==s){
                printf(" * ");
            }
            else{
                printf("  ");
            }
        }
        {
            printf("\n");
        }
       
    }
}