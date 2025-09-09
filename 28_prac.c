#include<stdio.h>

void main(){
    int n, i=2,sum=0,counter=1;
    printf("Enter any even number\n");
    scanf("%d" , &n);
    while(counter<=n){
        sum+=i;
        i+=2;
        counter++;
    }
    printf("The sum of first %d even numbers is %d", n , sum);
}