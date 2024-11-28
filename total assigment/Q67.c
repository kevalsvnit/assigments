


#include<stdio.h>
int main(){
int a[3][3],b[3][3],sub[3][3];

printf("enter the element of matrix a");
for(int i=0;i<3;i++)
{

for(int j=0;j<3;j++)
{

scanf("%d",&a[i][j]);

}

}
printf("enter the elements of array b");
for(int i=0;i<3;i++)
{

for(int j=0;j<3;j++)
{

scanf("%d",&b[i][j]);

}

}
for(int i=0;i<3;i++)
{

for(int j=0;j<3;j++)
{

sub[i][j]=a[i][j]-b[i][j];

}

}
printf("sum matrix is:");
printf("\n");

for(int i=0;i<3;i++){

for(int j=0;j<3;j++)
{

printf("%d\t",sub[i][j]);

}
printf("\n");
}



}