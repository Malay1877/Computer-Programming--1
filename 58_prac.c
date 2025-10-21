// Convert a string to a lower case.
#include<stdio.h>

void main(){
    char s[100];
    int i=0;
    printf("Enter the string\n");
    gets(s);
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        i++;
    }
    printf("The new string is:\n");
    printf("%s" , s);
    
}