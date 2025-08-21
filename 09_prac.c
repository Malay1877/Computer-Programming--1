#include<stdio.h>

void main(){
    float NS , GS , A , D;
    printf("Enter the Gross Salary\n");
    scanf("%f" , &GS);
    A = GS*0.1;
    D = GS*0.03;
    NS = GS + A - D;
    printf("The Net Salary is %f" , NS);
}
