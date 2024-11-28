// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF 

#include<stdio.h>
int main(){

int num,sum=0,r;

printf("enter number");
scanf("%d",&num);
while(num>0){

  sum=sum+(num%10);
  num=num/10;

}

while(sum>=10){
 
 int k=0;

 while(sum>0){

  k=k+sum%10;
  sum=sum/10;  

 }
 sum=k;


}

printf("Single digit sum of digits: %d\n", sum);
return 0;

}