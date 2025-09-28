//to calculate the number of digits in a given number.
#include<stdio.h>

void main(){
    int n,c;
    printf("Enter any number\n");
    scanf("%d" , &n);
    c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    printf("The number of digits in the given number is %d\n" , c);
}