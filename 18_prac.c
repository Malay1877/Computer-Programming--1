#include<stdio.h>

void main(){
    int n , i;
    printf("Enter the Number\n");
    scanf("%d" , &n);
    if(n<=1){
        printf("Not Prime\n");
    }
    for(i = 2; i<= n-1 ; i++){
        if(n % i == 0){
            printf("Number is not Prime\n");
            break;
        }
    }
    if(i==n){
        printf("Number is Prime");
    }
}