//4. PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL,LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.

#include <stdio.h>
void main(){
  char ch;
  
  printf("Enter a character  ");
  scanf("%c",&ch);
  int n = ch ;
  if((n>=65)&&(n<=90)){
    printf("%c is an uppercase letter",ch);
  }
  else if((n>=97)&&(n<=122)) {
    printf("%c is a lowercase letter",ch);
  }
  else if((n>=48)&&(n<=57)) {
      printf("%c is a digit",ch);
  }
  else {
    printf("%c is a special character",ch);
  }
  }