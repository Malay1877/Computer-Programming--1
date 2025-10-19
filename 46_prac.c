//Changing value of the variable using pointer.
#include<stdio.h>

 void main(){
    int a=7;
    int* m=&a;
    *m=9;
    printf("The value of a is %d" , *m);
 }