#include <stdio.h>

int main() {
    int totalsecond, second, hour, minute;
    //PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME

    
    printf("Enter total seconds: ");
    scanf("%d", &totalsecond);

    
    hour = totalsecond / 3600;
    minute = (totalsecond % 3600) / 60;
    second = totalsecond % 60;


    printf(" %d", hour);
    printf(":%d", minute);
    printf(":%d", second);

    return 0;
}
