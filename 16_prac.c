#include<stdio.h>

void main(){
    int P , C , M , TM , AM ;
    printf("Enter the marks obtained in PHYSICS\n");
    scanf("%d" , &P);
    printf("Enter the marks obtained in CHEMISTRY\n");
    scanf("%d" , &C );
    printf("Enter the marks obtained in  MATHEMATICS\n");
    scanf("%d" , &M);
    AM =(P+C+M)/3;
    TM = P+C+M;
    printf("Average marks obtained are %d\n" , AM);
    printf("The Total marks obtained are %d\n" , TM);
}
