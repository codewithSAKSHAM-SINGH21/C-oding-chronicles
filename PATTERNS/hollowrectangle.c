#include<stdio.h>
void main(){

    int length, breadth ;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    
    for(int i = 1; i <= length; i++) {
        for(int j = 1; j <= breadth; j++) {
            //  to print '*' at the borders
            if(i == 1 || i == length || j == 1 || j == breadth) {
                printf("* ");
            } else {
                printf("  "); //  to print space inside the rectangle
            }
        }
        printf("\n"); 
    }

}