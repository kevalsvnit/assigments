// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND
// CALCULATE SUM OF A LIST OF NUMBERS READ

#include<stdio.h>
int main(){
int num,a,sum=0;
do{
printf("enter any integer");
scanf("%d",&num);
sum=sum+num;


}
while(num>0);
printf("%d",sum);






}