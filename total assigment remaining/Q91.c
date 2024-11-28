#include<stdio.h>
 int main(){
int num,k,j;
int *a;
printf("enter the number");
scanf("%d",&num);
a=&num;
k=(*a)*(*a);
j=(*a)*(*a)*(*a);

printf("squre=%d\n",k);
printf("cube=%d",j);



 }