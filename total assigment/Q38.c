// PROGRAM TO PRINT 1,4,9,16,25,………N

#include<stdio.h>

int main()
{

int i=1,a=1,n;

  printf("enter last num");

  scanf("%d",&n);
while(a<n)
{

a=(i*i);    
  printf("%d ",a);
i=i+1;

}


}










