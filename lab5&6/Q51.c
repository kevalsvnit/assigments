

#include<stdio.h>

int main()
{


int arr[5] = {1,0,0,0,0};

for (int i = 0; i < 5; i++)
{

  for (int j = 0; j < 5; j++)
  {
  printf("%d", arr[j]);
  }

  printf("\n");
  arr[i + 1] = 1;
  arr[i] = 0;
  
}












}