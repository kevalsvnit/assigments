
#include<stdio.h>
void palindrom(int n);
void palindrom(int n)
{
      
int k,r,sum;
k=sum;

while(n>0)
{
r=n%10;
sum=r+(10*sum);
n=n/10;
}
if(k==sum)
{

    printf("number is palindrom");
}
else
{
printf("number is not palindrom");
}

}
int main(){

int k,r,sum,n;
k=sum;
printf("enter vlaue of number");
scanf("%d",&n);




}