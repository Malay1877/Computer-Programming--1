//Comapring two strings.
#include<stdio.h>
#include<string.h>

void main(){
    char s1[100],s2[100];
    int r;
    printf("Enter the string s1\n");
    gets(s1);
    printf("Enter the string s2\n");
    gets(s2);
    r = strcmp(s1,s2);
    if(r<0){
        printf("s1 is lower than s2\n");
    }
    else if(r>0){
        printf("s1 is greater than s2\n");
    }
    else{
        printf("Both the strings are equal\n");
    }
}