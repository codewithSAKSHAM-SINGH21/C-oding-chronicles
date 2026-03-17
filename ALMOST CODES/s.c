#include<stdio.h>

int main(){
    int n;
    printf("enetr the number : ");
    scanf("%d", &n);
    int sum = 0;
    for(int i=1; i<=n; i=i+1){
        sum += i;
        
    }
    printf("the sum of first %d natural number is : %d\n", n, sum);
    return 0;
}