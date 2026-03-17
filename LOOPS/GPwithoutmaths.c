#include<stdio.h>
void main(){
    int p;
    printf("Enter the value of p: ");
    scanf("%d",&p);
    // 3 9 27.... n terms of the series
    //again we are going to use extra variable to store the current term
    int current_term = 3 ;
    for(int i =1;i<=p;i++){
        printf("%d ",current_term);
        current_term =current_term * 3;
    }
   
}