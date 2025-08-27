#include<stdio.h>

void main(){
    int a , b , temp;
    printf("Enter Two Numbers\n");
    scanf("%d %d" , &a , &b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n" , a , b);
}