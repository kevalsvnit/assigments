#include<stdio.h>
void armstrong(int);
int main(){

int num;
printf("enter the number");
scanf("%d",&num);
armstrong(num);



}

void armstrong(int num)
{
int sum=0,r,k;
k=num;
while(num>0)
{
r=num%10;
sum=sum+(r*r*r);
num=num/10;

}
if(k==sum){

printf("entered number is armstrong number");

}
else  {
printf("entered number is not armstrong number");

}

}