#include<stdio.h>
//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICALOPERATOR.(&&) 

int main(){
    int a,b,c;
printf("enter the value of a,b and c ");
scanf("%d%d%d",&a,&b,&c);
printf("value ofa=%d b=%d c=%d",a,b,c);
if(a>b&&a>c){

    printf("\ngreatest num is a=%d\n",a);
}
else if(b>a&&b>c){
    printf("greatest num is b=%d\n",b);
    
}
else
{
    printf("greatest num is c=%d\n",c);
}

}