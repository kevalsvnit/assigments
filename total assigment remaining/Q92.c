#include<stdio.h>
int main(){
int n,max;
int *a;
printf("enter the number of elements");
scanf("%d",&n);
int b[n];
a=&b[0];
for(int i=0;i<n;i++)
{
scanf("%d",a+i);

}

max=*a;
for(int i=1;i<n;i++){

if(*(a+i)>max){

max=*(a+i);


}




}

printf("max element is %d",max);



}