// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.


#include<stdio.h>
int main(){

float i,a=1,b=0,n,c=1;
printf("enter no of term you want to ADD");
scanf("%f",&n);
for(i=1;i<=n;i++){

c=c*a;
b=b+(i/c);
a=a+1;




}
printf("%f",b);


}