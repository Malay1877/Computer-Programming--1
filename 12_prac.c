#include<stdio.h>

void main(){
    float NS , GS , D;
    printf("Enter the amount of Gross Sales\n");
    scanf("%f" , &GS);
    if(GS>20000){
        D=0.15*GS;
    }
    if(GS<20000 && GS>10000){
        D = 0.1*GS;
    }
    if(GS<10000){
        D = 0.05*GS;
    }
    NS = GS - D;
    printf("The Net Sales is %f" , NS);
}