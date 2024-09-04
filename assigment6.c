#include <stdio.h>
//programm to swap value of two variable without using third variable
int main() {
    int a, b;

    
    printf("Enter two numbers a and b \n");
    scanf("%d %d", &a, &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    
    a = a + b; 
    b = a - b; 
    a = a - b; 
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}