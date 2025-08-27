#include<stdio.h>

void main(){
    int P , C , M , TM , AM ;
    printf("Enter marks scored in PHYSICS CHEMISTRY MATHEMATICS\n");
    scanf("%d %d %d" , &P , &C , &M);
    if(P>100){
       printf("Wrong Input\n");
    }
    else if(P<35){
        printf("FAIL\n");
    }
    if(C>100){
       printf("Wrong Input \n");
    }
    else if(C<35){
        printf("FAIL\n");
    }
    if(M>100){
       printf("Wrong Input\n");
    }
    else if(M<35){
        printf("FAIL\n");
    }
    AM = (P+C+M)/3 ;
    TM = (P+C+M);
    printf("The average marks scored by the student is %d\n" , AM);
    printf("The Total Marks scored by the student is %d\n" , TM);
    if(AM>=70){
        printf("Distinction\n");
    }
    else if(AM>=60&&AM<70){
        printf("First Class\n");
    }
    else if(AM>=50&&AM<60){
        printf("Second Class\n");
    }
    else if(AM>=35&&AM<50){
        printf("Third class\n");
    }
    else if(AM<35){
        printf("FAIL\n");
    }
}