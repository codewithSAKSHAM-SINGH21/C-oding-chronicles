#include<stdio.h>
void main(){
    int m;
    printf("enter the valure of m :");
    scanf("%d",&m);
    // 4,7,10,13,16....n terms
    // we are going to use extra variable to store the current term
    int c = 4;
    for(int  i = 1;i<=m;i++){
        printf("%d\n",c);
        c = c + 3;
    }
}