#include<stdio.h>

void main(){
    int n , o , r, s=0;
    printf("Enter the Number\n");
    scanf("%d" , &n);
    o = n;
    while(n>0){
        r = n % 10;
        s = r + (s*10);
        n =n/10;
    }
    if(o == s){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is Not Palindrome");
    }
    
}