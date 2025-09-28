//code to separate the digits from the given number.
#include<stdio.h>

void main(){
    int n,digit;
    printf("Enter any number\n");
    scanf("%d" , &n);
    while(n>0){
        digit=n%10;
        printf("%d\t" , digit);
        n=n/10;
    }
}
