#include <stdio.h>
int main(){

int count=0,k=0;
char str1[100];
char *a;
gets(str1);
puts(str1);
a=&str1[0];

while(*a!='\0'){

if(*a!=' '){

count++;

}
k++;
a=a+1;




}


printf("length of string including space=%d\n",k);
printf("length of string  excluding space=%d\n",count);








}
