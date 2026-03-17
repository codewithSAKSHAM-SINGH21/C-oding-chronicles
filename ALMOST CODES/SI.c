#include<stdio.h>

int main(){
    float p ,r,t,si;
    printf("Enter the principal, rate and time: ");
    scanf("%f%f%f",&p,&r,&t);
    float SI = (p*r*t)/100;
    printf("Simple Interest is: %f\n", SI);
    return 0;
}