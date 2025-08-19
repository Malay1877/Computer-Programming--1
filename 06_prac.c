#include<stdio.h>

void main(){
    float B , H , A;
    printf("Enter Length of the base of the Triangle\n");
    scanf("%f" , &B);
    printf("Enter Height of the Triangle\n");
    scanf("%f" , &H);
    A = B*H/2;
    printf("The Area of the Traingle is %f" , A);
    
}