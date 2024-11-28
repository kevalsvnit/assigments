//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,
//NEGATIVE, AND ZERO ELEMENTS


#include<stdio.h>
int main(){

int a[10],pos=0,neg=0,zero=0;

printf("enter elements in array:");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);

}

for(int i=0;i<10;i++){
if(a[i]>0){
pos=pos+1;

}
else if(a[i]<0){

neg=neg+1;

}
else if(a[i]==0){

    zero=zero+1;
}


}
printf("number of positive elements:%d\n",pos);
printf("number of negative elements:%d\n",neg);
printf("number of zero element:%d",zero);



}