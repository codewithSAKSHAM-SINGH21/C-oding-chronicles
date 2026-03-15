#include<stdio.h>

int main(){
    float m1 = 91, m2=92, m3=81, m4=89, m5=99;
    float total = m1 + m2 + m3 + m4 + m5;
    // float percentage = (total/500)*100;
    //m1 = maths, m2 = chemistry, m3 = physcics, m4 = phe, m5 = music
    float percentage = (total/500)*100;
    printf("Percentage is: %f\n", percentage);
    return 0;
}