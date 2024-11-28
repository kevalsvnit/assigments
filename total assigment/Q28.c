//PROGRAM  to CHECK WHETHER A NO IS ARMSTRONG OR NOT.


#include<stdio.h>
int main(){
int num,r,k,sum=0;
printf("enter the number");
scanf("%d",&num);
k=num;
while(num>0){

r=num%10;
sum=sum+(r*r*r);
num=num/10;

}
if(k==sum)
{

printf("entered number is armstrong number");

}
else
{

    printf("entered number is not armstrong");
}









}