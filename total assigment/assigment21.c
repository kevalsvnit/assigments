#include<stdio.h>
//PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING
//ARITHMETIC OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE
//IN CHAR FORM).
int main(){
int a,b,sum,subtraction,division,multiplication;
char operation;



printf("enter the operation(+,-,*,/)\n");
scanf("%c",&operation);
printf("enter the value of \na\nb");
scanf("%d%d",&a,&b);
switch (operation)
{
case '+':
sum=a+b;
printf("the sum=%d",sum);
    break;
case '-':
subtraction=a-b;
printf("substaction=%d",subtraction);
    break;
case '*':
multiplication=a*b;
printf("multiplication=%d",multiplication);
break;
case '/':
division=a/b;
printf("division=%d",division);



}




}