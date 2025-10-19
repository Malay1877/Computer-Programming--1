//address of a pointer and the value at that address.
#include<stdio.h>

void main(){
    int a=18;
    int* m = &a;
    printf("The address of the variable a is %u\n" , m );
    printf("The value at address %u is %d\n" , m , *m);
}