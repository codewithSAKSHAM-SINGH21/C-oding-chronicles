#include<stdio.h>

int main(){
    int age ;
    printf("enter the age: ");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("you are an adult and  you are eligibe to vote\n");
    }
    else
    {
        printf("you are not an adult\n");
    }
    printf("thenk you for reaching us\n");
    return 0;
}