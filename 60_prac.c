// Calculate the factorial of a number (Recursive Function).
#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
    int main(){
        int n;
        printf("Enter any number\n");
        scanf("%d" , &n);
        int x=fact(n);  // Function call.
        printf("The factorial of %d is %d\n" , n , x);
        return 0;
    }
