 #include<stdio.h>
 
 int main(){
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        int remainder = a % b;
        printf("The remainder when %d is divided by %d is: %d\n", a, b, remainder);     
    
    return 0;
 }