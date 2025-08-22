#include<stdio.h>

void main(){
    int A;
    printf("Enter an integer\n");
    scanf("%d" , &A);
    if(A % 7==0){
        printf("The number is divisible by 7\n");
    }
    else{
        printf("The Number is not divisible by 7");
    }
}