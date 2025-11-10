#include<stdio.h>

int swap(int x, int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("The values of a and b inside the function is %d and %d\n" , x,y);
    return 0;
}

int main(){
    int a,b;
    printf("Enter the first number\n");
    scanf("%d" , &a);
    printf("Enter the second number\n");
    scanf("%d" , &b);
    swap(a,b);   /*  Call by value.

    Only copies of a and b are passed to the swap function but there values remains same.*/
    
    printf("The values after swapping are %d and %d" , a , b);  // Values in the main function remains unchanged.
    return 0;
}