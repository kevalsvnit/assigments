//programme to convert fahrenheit to celcius
#include<stdio.h>
int main(){
    int tempincelsius ,tempinfahrenheit;

    printf("ENTER TEMPERATURE IN FAHRENHEIT\n");
    scanf("%d", &tempinfahrenheit);
    tempincelsius = (tempinfahrenheit - 32) * 5/9 ;
    printf("TEMPERATURE IN CELSIUS =%d" , tempincelsius);
    


    return 0 ;

}


