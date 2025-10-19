//Printing each element of a char arr using pointer.
#include<stdio.h>

void main(){
    char a[]="INDIA";
    char* p=a; // use char instead of int here.
    int i;
    for(i=0;i<5;i++){
        printf("The char at index %d is %c\n" , i , *p);
        p++;
    }
}