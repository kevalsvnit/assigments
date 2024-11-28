#include<stdio.h>
int main()
{
int salary1,salary2,salary3,salary4,grosssalary;
printf("enter value of salary1,salary2,salary3,salary4");
scanf("%d%d%d%d",&salary1,&salary2,&salary3,&salary4);
grosssalary=salary1+salary2+salary3+salary4;
printf(  "grosssalary=%d",grosssalary);
return 0;

}