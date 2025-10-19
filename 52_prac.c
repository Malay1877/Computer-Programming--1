//Find out length of a string.
#include<stdio.h>
#include<string.h>

void main(){
    char s[100];
    int i,Length;
    printf("Enter Elements of the string\n");
    gets(s);
    Length=strlen(s);
    printf("The length of the string is %d" , Length);

}