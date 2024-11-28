//WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
//REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
//If sales<=Rs. 500, commission is 5%
//If sales> but <=2000, commission is Rs. 35 plus 10% above Rs.
//500 If sales>2000 but <=5000, commission is Rs. 185 plus 12%
//above Rs. 2000 If sales>5000, commission is 12.5%

#include<stdio.h>
int main(){

int sale;
float commision;

printf("enter sales\n");
scanf("%d",&sale);


if(sale<=500)

{
   commision=(sale/100)*5;
   printf("%f",commision);

}

else if(sale>500&&sale<=2000)
{

   commision=35+(   ( sale-500 ) *10    )/100;
   printf("%f",commision);

}

else if(sale>2000 && sale<=5000)
{
  commision= 185+(sale-2000)*12/100;
  printf("%f",commision);

}

else if(sale>5000)
{

  commision = (sale/100)*12.5;
  printf("%f",commision);

}

return 0;


}