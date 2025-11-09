#include<stdio.h>

void year(int n){
    if(n%4==0 && (n%100!=0 || n%400==0)){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }
}

int main(){
    int n;
    printf("Enter any year\n");
    scanf("%d" , &n);
    year(n);
    return 0;
}