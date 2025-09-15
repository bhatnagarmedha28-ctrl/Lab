//According to the gregorian calendar, it was Monday on the date 01/01/01. 
//If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year
#include <stdio.h>
int main(){
    int year, day, month, d, m, y, k;
    printf("Enter a year: ");
    scanf("%d", &year);
    day = 1;
    month = 1;
    if(month < 3){
        month += 12;
        year--;
    }
    d = day;
    m = month;
    y = year % 100;
    k = year / 100;
    int f = d + (13*(m + 1))/5 + y + (y/4) + (k/4) - (2*k);
    int weekday = f % 7;
    switch(weekday){
        case 0: printf("Saturday\n"); break;
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        default: printf("Error\n");
    }
    return 0;
}