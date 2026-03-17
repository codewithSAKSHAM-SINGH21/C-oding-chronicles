#include<stdio.h>
void main(){
    int n ,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    for(int i =1;i<=n;i++){
        for(int j =1;j<=m;j++){
            printf("*");
        }
        {
            printf("\n");
        }
    }
}
    