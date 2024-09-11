
//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)

#include<stdio.h>

int main()
{

int a,b,c,i,n;
  printf("enter number of term\n");
  scanf("%d",&n);
a=0;
b=1;

for(i=0;i<n;i++  )
{
  printf(" %d",a);
  c=a+b;
  a=b;
  b=c;

}

}