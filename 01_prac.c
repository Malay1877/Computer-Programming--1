#include<stdio.h>

void main(){
    int L , B , A;
    printf("Enter Length\n");
    scanf("%d" , &L);
    printf("Enter Breadth\n");
    scanf("%d" , &B);
    A = L*B;
    printf("Area of the Rectangle is %d", A);
}