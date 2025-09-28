//to check whether a number is divisible by a divisior or not.
#include<stdio.h>

void main(){
    int n,d;
    printf("Enter any number\n");
    scanf("%d" , &n);
    printf("Enter the divisor\n");
    scanf("%d" , &d);
    if(n%d==0){
        printf("The number is divible by %d" , d);
    }
    else{
        printf("The number is not divisible by %d" , d);
    }
}