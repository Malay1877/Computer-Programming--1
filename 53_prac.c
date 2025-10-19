//Length of the string without using strlen.
#include<stdio.h>

void main(){
    char s[100];
    printf("Enter the string\n");
    gets(s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    printf("The length of the string is %d" , i);
}