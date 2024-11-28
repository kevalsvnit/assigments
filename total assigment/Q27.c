//PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.


#include<stdio.h>
int main(){

int k=1,i,num;
printf("enter number");
scanf("%d",&num);

if (num<=1){


    printf("number is not prime");
}
    for(i=2;i<=num/2;i++)
{
    if(num%i==0)
    {
    k=0;
    break;
 
}

}
if(k==1)
{
    printf("number is prime");
}
else
{

    printf("number is not prime");
}

}
