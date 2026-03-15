#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        int a= 1;
        for(int j = 1;j<=i;j++){
            printf("%d ",a);
            a+=2;
        }
        {
            printf("\n");
        }
       
    }
}
