
#include<stdio.h>
//PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES

int main(){
    int seconds,days,hours,minutes;
    printf("enter the no of seconds,which earth takes for one revolution\n");


    scanf("%d" , &seconds);
    minutes = seconds/60;
    hours = minutes/60;
    days = hours/24;

    printf("days =%d\n", days);
    printf("hours = %d\n", hours);
    printf("minutes= %d\n", minutes);

    return 0;


}
