#include<stdio.h>
int main(){
//programm to swap value of two variable using third variable
int a,b,k;
printf("\nenter the value of a\n");
scanf("%d",&a);
printf("\nenter the value of b\n");
scanf("%d",&b);
printf("\nthe value of a before swapping is\n");
printf("\na =%d\n",a);
printf("\nthe value of  before swapping is\n");
printf("\nb =%d\n",b);

k = a;
a = b;
b = k;
printf("\nafter swapping\n");
printf("\na =%d\n",a);
printf("\nb =%d\n",b);



}