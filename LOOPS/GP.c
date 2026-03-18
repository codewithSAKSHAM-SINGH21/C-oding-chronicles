#include<stdio.h>
void main(){
    int u;
    printf("enter the value of u: ");
    scanf("%d",&u);
    // 3,9,27,81,243....n terms
    //now this time we will use multiplication to get the next term
    int current_term = 3;
    for(int i=1; i<=u; i++){
        printf("%d\n",current_term);
        current_term = current_term * 3;
    }

}