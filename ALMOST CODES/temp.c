#include<stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("enter the temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0/5.0) + 32;
    printf("the temperature in fahrenheit is: %.2f", fahrenheit);
    return 0;
}