#include<stdio.h>
int main(){
    //initialization
    int num =1;
    while(num <=100){ //condition
        printf("%d\n",num);
        num++; //increment
    }
    printf("first case Done\n");
    //initialization
    int num2=100;
    while(num2> 0){ //condition
        printf("%d\n",num2);
        num2--; //decrement
    }   
   printf("second case Done\n");
    return 0;
}