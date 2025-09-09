#include<stdio.h>

void main(){
    int n,i=1,sum=0,counter=1;
    printf("Enter any odd number\n");
    scanf("%d" , &n);
    while(counter<=n){
        sum+=i;
        i+=2;
        counter++;
    }
    printf("Sum of first %d odd numbers is %d" , n , sum);
}