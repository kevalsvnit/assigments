
#include<stdio.h>
void prm(int a);
void prm(int a )
{

int k;
k=a%2;
if(k==0){

printf("entered number is even");

}
else if(k==1){


    printf("entered number is odd ");
}


}

int main(){

int a;
printf("enter a");
scanf("%d",&a);
prm(a);



}