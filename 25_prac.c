#include<stdio.h>

void main(){
    int n,i;
    printf("Enter any integer\n");
    scanf("%d" , &n);
    printf("Even numbers upto %d are\n" , n);
    for(i=2;i<=n;i=i+2){
        printf("%d\n", i);
    }
}