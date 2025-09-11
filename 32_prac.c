#include<stdio.h>

void main(){
    int i=1,sum=0;
    while(i<=100){
        if(i%13==0){
            sum+=i;
        }
        i++;
    }
    printf("The sum of numbers divisible by 13 between 1 to 100 is %d" , sum);
}