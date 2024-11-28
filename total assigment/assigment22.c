#include<stdio.h>
int main(){

 int i ,n,factorial=1;
 printf("enter any number to find factorial");
 scanf("%d",&n);
 if(n>=0){

 for(i=1 ;i<=n;i++){

 factorial=factorial*i;



 }

 printf("factorial=%d",factorial);



 }
 else{
 printf("error:you entered negative integer");


 }
    





}