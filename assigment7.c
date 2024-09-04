#include<stdio.h>
//programme to calculate area of triangle
int main(){
int area_of_triangle,base,height;
printf("\nenter the value of height in centimeter\n");
scanf("%d",&height);
printf("\nenter the length of base in centimeter\n");
scanf("%d",&base);
area_of_triangle= base*height*1/2;
printf("the area of triangle in cm^2 is=%d",area_of_triangle);


}