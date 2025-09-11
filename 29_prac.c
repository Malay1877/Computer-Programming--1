//code to calculate the factorail of a given number//
#include<stdio.h>

void main(){
    int n,i=1,product=1;
    printf("Enter any number who's factorial is to be obtained\n" );
    scanf("%d" , &n);
    while(i<=n){
        product*=i;
        i++;
    }
    printf("The factorial of %d is %d" , n , product);
}