#include<stdio.h>

int swap(int a, int b)
{
    int k;

    printf("intial value of a is : %d\n",a);
    printf("intial value of b is : %d\n",b);
    k=b;
    b=a;
    a=k;
    printf("now, value of a is : %d\n",a);
    printf("now, value of b is : %d\n",b);


}
int main()
{
    int a,b;
    printf(" enter the value of a & b\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0 ;
}
