#include<stdio.h>

void main(){
    float INR , USD; 
    printf("Enter the amount in INR\n");
    scanf("%f" , &INR);
    USD = INR/87.3334;
    printf("The amount in USD is: %f" , USD);
}