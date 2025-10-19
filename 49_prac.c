#include<stdio.h>

void main(){
    int a[5]={1,2,3,4,5};
    int* p=a;
    p+=2;
    printf("The third element is %d" , *p);
    
}