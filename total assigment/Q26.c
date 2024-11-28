//PROGRAM to PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N

#include<stdio.h>
int main()
{

int n,a=0,i,sum=0;    

  printf("enter value of n\n");
  scanf("%d",&n);
for(i=1;i<=n;i=i+2    )
{

sum=sum+i;

}

  printf("sum of odd numbers=%d\n",sum);
  for(i=0;i<=n;i=i+2){

    a=a+i;
}
printf("sum of even numbers=%d\n",a);

}