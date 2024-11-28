#include<stdio.h>
int main(){
int n,max,min;
printf("enter the number of elements");
scanf("%d",&n);
int a[n];
printf("enter numbers");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);

}

max=min=a[0];
for(int j=1;j<n;j++){

if(a[j]>max){

max=a[j];


}

else if(a[j]<min){

min=a[j];

}

}
printf("max=%d\n",max);
printf("min=%d",min);





}