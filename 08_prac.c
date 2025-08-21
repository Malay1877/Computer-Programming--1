#include<stdio.h>

void main(){
   float  F , C;
    printf("Enter the Temperature in Celsius.\n ");
    scanf("%f" , &C);
    F = (9.0/5.0)*C + 32;
    printf("The Temperature in Farenheit is %f" , F);
}