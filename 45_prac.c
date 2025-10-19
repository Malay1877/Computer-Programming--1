//value of a variable using a pointer.
#include<stdio.h>

void main(){
    int a=7;
    int* m=&a;
    printf("The value of a is %d\n" ,  *m);
}