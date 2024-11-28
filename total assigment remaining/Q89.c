
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],b[n];
int *aptr;
for(int i=0;i<n;i++){
scanf("%d",&a[i]);

}

aptr=&a[n-1];
for(int j=0;j<n;j++)
{

b[j]=*(aptr-j);



}
for(int i=0;i<n;i++)
{

printf("%d ",b[i]);


}




}






