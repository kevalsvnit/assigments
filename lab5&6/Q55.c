// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
// TOTAL NO. OF EVEn ELEMENT.
#include<stdio.h>
int main(){
int num[10];
int odd=0;
int even=0;
printf("enter 10 integers");

for(int i=0;i<10;i++){

scanf("%d",&num[i]);

}
for(int j=0;j<10;j++)
{
if((num[j])%2==0){

even=even+1;

}
else if((num[j])%2==1){

odd=odd+1;

}

}

printf("odd=%d",odd);
printf("\n");
printf("even=%d",even);




}