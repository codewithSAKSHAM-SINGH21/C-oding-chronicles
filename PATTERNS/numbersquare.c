#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){ //NO OF LINES / ROWS -> I
        for(int j = 1;j<=n;j++){ // NO OF COLUMNS -> J

            printf("%d ",j);
        }
        {
            printf("\n");
        }
    }
}