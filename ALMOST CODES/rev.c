#include<stdio.h>

int main(){
    int num = 1234, rev = 0;
    while (num != 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
}
printf("Reversed number: %d", rev);
    return 0;
}