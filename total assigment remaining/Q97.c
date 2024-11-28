#include<stdio.h>
int main(){

char a[100];
int count=0;
gets(a);
puts(a);
char *ptr;
ptr=a;
while(*ptr!=0)
{

switch(*ptr)


{

case'a':
count++;
break;

case'e':
count++;
break;

case'i':
count++;
break;

case'o':
count++;
break;

case'u':
count++;
break;







}

ptr=ptr+1;


}


printf("number of vowel is %d",count);




}