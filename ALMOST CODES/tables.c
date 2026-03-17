#include<stdio.h>
int main(){
    printf("welcome to the table generator\n");
    int num;
    printf("Enter the number whose table you want: ");
    scanf("%d",&num);
    //initialization
    int i=1;
    while(i<=10){ //condition
        printf("%d x %d = %d\n",num,i,num*i);
        i++; //increment
    }
    printf("My work is completed\nThank you\n");
}