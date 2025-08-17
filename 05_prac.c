#include<stdio.h>

void main(){
    float H , M;
    printf("Enter number of hours\n");
    scanf("%f" , &H);
    M = H*60;
    printf("Number of minutes are %f" , M);
}