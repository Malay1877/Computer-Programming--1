#include<stdio.h>

void main(){
    float NS , GS , A , D;
    printf("Enter the amount of Gross Salary\n");
    scanf("%f" , &GS);
    if (GS>10000){
        A = 0.1*GS;
        D = 0.03*GS;
    }
   else if (GS<10000 && GS>5000){
        A = 0.07*GS;
        D = 0.02*GS;
    }
    NS = GS + A - D;
    printf("The amount of Net Salary is %f" ,  NS);
}