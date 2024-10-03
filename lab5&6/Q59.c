
//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE arrays
#include<stdio.h>
int main(){
int a[10],b[10],c[10];
printf("enter elements of a");

for(int i=0;i<10;i++)
{

scanf("%d",&a[i]);

}
printf("enter the elements of b");

for(int j=0;j<10;j++)
{

scanf("%d",&b[j]);

}

for(int k=0;k<10;k++)
{

c[k]=a[k];
a[k]=b[k];
b[k]=c[k];

}

printf("array a after swapping:\n");
for(int i=0;i<10;i++){

printf("%d\t",a[i]);

}
printf("\n");

printf("array b after swapping:\n");
for(int j=0;j<10;j++){

printf("%d\t",b[j]);

}





}