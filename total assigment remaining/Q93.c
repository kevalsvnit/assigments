#include<stdio.h>
int main(){
char *p;
int count=0,k=0;
char str[100];
printf("enter the string\n");
gets(str);
p=str;

while(*p==' ')
{
p++; 
}
while(*p!='\0')
{

if(*p!=' '&& ( *(p+1)==' '||*(p+1)=='\0' ) )
{


count=count+1;




}

p=p+1;
}


printf("no of words =%d",count);



}











