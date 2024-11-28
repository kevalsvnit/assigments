// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.


#include<stdio.h>
int main(){
int num,sum=0,r,k;

printf("enter the number");
scanf("%d",&num);
k=num;

while(num>0)
{
r=num%10;
sum=r+(10*sum);
num=num/10;

}
if(k==sum)
{



    printf("number is palindrom");
}

else
{
printf("number is not palindrom");

}






}