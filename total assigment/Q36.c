// PROGRAM TO PRINT 1,3,5,7,9………N

#include<stdio.h>
int main(){


    int n,i=1,a;
    printf("enter last digit till you want series\n");
    scanf("%d",&n);

    while(i<=n)
    {

    printf("%d ",i);
    i=i+2;

    }

}