// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.

#include<stdio.h>
int main(){
int num,sum=0,r;
printf("enter number");
scanf("%d",&num);
while(num>0){

r=num%10;
sum=sum+r;
num=num/10;


}
printf("%d",sum);




}