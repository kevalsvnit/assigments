
#include<stdio.h>
#include<string.h>
char findlength (char a[]){

 printf("length of string is %d",strlen(a));  


}

int main(){

char a[50];
printf("enter the string\n");
gets(a);

findlength(a);


}