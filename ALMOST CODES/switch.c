#include<stdio.h>

int main(){
    int day;
    printf("enter the day number (1-7): ");  // 1 for Monday, 2 for Tuesday, ..., 7 for Sunday
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
    }
    return 0;
}

/* jab bhi humko multiple conditions check karni hoti hai tab hum switch case ka use karte hai
 switch case me hum sirf integer aur character values ko hi check kar sakte hai
 hum float aur double values ko switch case me check nahi kar sakte hai
 switch case me hum string values ko bhi check nahi kar sakte hai
 switch case me hum sirf equality check kar sakte hai, relational operators (>, <, >=, <=) use nahi kar sakte hai
 switch case me hum break statement ka use karte hai taaki ek case ke baad dusre case me na chale jaye
 */

//jab bhi switch likhen its very important to use break statement after each case
//agar break statement nahi likhenge to program sabhi case ko execute karega jab tak break na mil jaye
//agar hum break statement nahi likhenge to program fall through behavior dikhayega