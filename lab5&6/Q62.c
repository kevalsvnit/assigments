


#include<stdio.h>
int main(){
   int n; 
printf("enter no of elements in array");
scanf("%d",&n);
int a[n];
printf("enter array element of a");

for(int i=0;i<n;i++)
{

scanf("%d",&a[i]);

}

for(int j=0;j<n/2;j++){

int k=a[j];
a[j]=a[(n-1)-j];
a[(n-1)-j]=k;




}

printf("after reversing array array b:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);



}