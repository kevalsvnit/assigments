// PROGRAM TO PRINT 2,4,6,8,10,12………N.


#include<stdio.h>
int main(){


    int n,i=2,a;
    printf("enter last digit till you want series\n");
    scanf("%d",&n);

    while(i<=n)
    {

    printf("%d ",i);
    i=i+2;


    }
}