#include<stdio.h>
int main(){
int principal,interestrate,time,simpleinterest,k;

printf("enter the value of principal amount\n");
scanf("%d",&principal);

printf("enter value interest rate\n");
scanf("%d",&interestrate);

printf("enter time in years\n");
scanf("%d",&time);

k=principal*interestrate*time;
simpleinterest=k/100;

printf("the simpleinterest is =%d\n",simpleinterest);



}