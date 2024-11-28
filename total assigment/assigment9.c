#include <stdio.h>
//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
int main() {
    int hour, minute, second, totalseconds;
    int k, j;

  
    printf("Enter value of time in hours:\n");
    scanf("%d", &hour);
    printf("Enter the value of time in minutes:\n");
    scanf("%d", &minute);
    printf("Enter the value of time in seconds:\n");
    scanf("%d", &second);


    k = hour * 3600;
    j = minute * 60;

    
    totalseconds = second + k + j;


    printf("Total seconds = %d\n", totalseconds);

    return 0;
}
