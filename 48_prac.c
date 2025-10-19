//Swap the values of two varaibles using pointers.
#include<stdio.h>

void main(){
    int a=7,b=9,t;
    int*m=&a , *n=&b;
    t=*m;
    *m=*n;
    *n=t;
    printf("The values of a and b are %d and %d respectively\n",*m,*n);
}