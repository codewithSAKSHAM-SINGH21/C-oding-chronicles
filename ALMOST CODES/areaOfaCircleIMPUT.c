#include<stdio.h>

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    printf("Area of the circle is: %f\n", area);
    return 0;
}