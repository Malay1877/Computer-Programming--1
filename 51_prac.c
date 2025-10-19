//Print the value of a variable using double pointer
#include<stdio.h>

void main(){
    int a=7;
    int*m = &a , **n=&m;
    printf("The value of variable a is %d" , **n);
}