#include<stdio.h>
//PROGRAM TO READ THREE NOS. AND PRINT MAX
int main(){
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
printf("value ofa=%d b=%d c=%d",a,b,c);
if(a>b){
if(a>c){
    printf("greater is a=%d",a);
}
else{
    printf("greater num is c=&d",c);
}
}

else{

if(b>c){
    printf("greater is b=%d",b);
}
else{

    printf("greater is c=%d",c);
}
}


}