#include <stdio.h>

int main() {
    int totalsecond, second, hour, minute;
    //PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME

    
    printf("Enter total seconds: ");
    scanf("%d", &totalsecond);

    
    hour = totalsecond / 3600;
    int k=totalsecond%3600;
    minute = k / 60;
    second = k % 60;


    printf(" %d", hour);
    printf(":%d", minute);
    printf(":%d", second);

    return 0;
}
