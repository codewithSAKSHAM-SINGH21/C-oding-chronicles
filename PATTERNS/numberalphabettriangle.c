#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        char ch = 'A';
        for(int j = 1;j<=i;j++){
            if(i%2==0){
            printf("%c ",ch);
            ch++;  
        }else{
            printf("%d ",j);
        }
        }
        {
            printf("\n");
        }
       
    }
}