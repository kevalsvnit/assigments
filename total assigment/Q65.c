

#include<stdio.h>
int main(){
int a[3][3];
printf("enter elements in array a");

for(int i=0;i<3;i++)
{

for(int j=0;j<3;j++)
{

scanf("%d",&a[i][j]);

}

}
printf("\n");
for(int i=0;i<3;i++)
{

for(int j=0;j<3;j++)
{

printf("%d\t",a[i][j]);

}
printf("\n");
}

printf("transpose of matrix is:");
printf("\n");
for(int i=0;i<3;i++)
{

for(int j=0;j<3;j++)
{

printf("%d\t",a[j][i]);

}
printf("\n");
}


}