#include <stdio.h>
//PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT

int main() {
    int cm, M, C, P, entrancemark;
    

    
    printf("Enter the value of\nmath marks,\nchemistry marks,\nphysics marks,\nentrance marks: ");
    scanf("%d%d%d%d", &M, &C, &P, &entrancemark);
    if(M>=0&&M<=200&&C>=0&&C<=200&&P>=0&&P<=200&entrancemark>=0&&entrancemark<=100){

       cm= M/2+P/2+C/2+entrancemark;

       printf("the cuttoff marks is=%d",cm);


    }
    else{
        printf("you entered invalid marks");

    }

    


}










    