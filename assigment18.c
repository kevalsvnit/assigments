#include<stdio.h>
//PROGRAM TO READ THREE NOS. AND PRINT MAXUSING CONDITIONAL (? :) OPERATOR.

int main(){

int a,b,c,max;

printf("enter the value of \na,\nb,\nc\n");
scanf("%d%d%d",&a,&b,&c);
max= (a>b)?((a>c)?a:c):((b>c)?b:c);
printf("max num is %d",max);



}
