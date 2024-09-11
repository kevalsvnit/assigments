#include<stdio.h>
int main(){

int x,y,sum=1,i,n,k;
printf("enter the value of x");
scanf("%d",&x);
printf("enter the value of n");
scanf("%d",&n);
if(n==1){
y=1+x;
printf("n=%d",y);

}
else if(n==2){
y=1+(x)/n;
printf("n=%d",y);


}
else if(n==3){

for(i=0;i<3;i++     ){

sum=sum*x;



}
y=1+sum;
printf("y=%d",y);

}
else {
y=1+n*x;
printf("y=%d",y);


}




}
