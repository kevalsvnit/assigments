#include<stdio.h>
#include<string.h>
int main(){
int i=1;
char str1[100],str2[100];
printf("enter the string\n");
gets(str1);
puts(str1);
int k=strlen(str1);
char *a;
a=str1;

while(*a!='\0')
{
str2[k-i]=*a;
i++;
a=a+1;


}
str2[k]='\0';
printf("copied string is\n");
puts(str2);



}
