#include<stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("the sum of first %d natural number is : %d", n, sum);
    return 0;
}