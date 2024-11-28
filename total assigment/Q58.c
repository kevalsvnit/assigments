#include<stdio.h>
int main(){

int a[10],b[10],sum[10];
printf("enter elements of array a");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);

}

printf("enter elements of array b");
for(int j=0;j<10;j++){
scanf("%d",&a[j]);

}

for(int k=0;k<10;k++){

sum[k]=a[k]+b[k];


}


for(int c=0;c<10;c++){

printf("%d\t",sum[c]);


}

}