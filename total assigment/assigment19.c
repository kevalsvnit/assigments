#include<stdio.h>
//PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALLCASE LETTER OR NOT USING CONDATIONAL OPERATOR.

int main(){
char ch;
printf("\nenter any character\n");
scanf("%c\n",&ch);

if(ch>=97&&ch<=126){

    printf("this is smallcase letter");
}
else if(ch>=65&&ch<=126){

    printf("this is uppercase letter");
}
else{
    printf("entered invalid character");
}



}