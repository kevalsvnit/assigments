
//programm to perform matrix multiplication

#include<stdio.h>
int main(){
int a[3][3],b[3][3],result[3][3];

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

for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

result[i][j]=0; 

for(int k=0;k<3;k++){

result[i][j]=result[i][j]+a[i][k]*b[k][j];


}

}
}
for(int i=0;i<3;i++){

for(int j=0;j<3;j++)
{

printf("%d\t",result[i][j]);

}
printf("\n");
}





}