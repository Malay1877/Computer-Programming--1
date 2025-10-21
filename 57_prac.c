// frequency of a vowel in a given string.
#include<stdio.h>

void main(){
    char s[100];
    int a=0,e=0,i=0,o=0,u=0,j;
    printf("Enter the elements of the String\n");
    gets(s);
    for(j=0;s[j]!='\0';j++){
    if(s[j]=='a' || s[j]=='A'){
        a++;
    }
    if(s[j]=='e' || s[j]=='E'){
        e++;
    }
    if(s[j]=='i' || s[j]=='I'){
        i++;
    }
    if(s[j]=='o' || s[j]=='O'){
        o++;
    }
    if(s[j]=='u' || s[j]=='U'){
        u++;
    }
  }
  printf("frequency of:\n");
  printf("a is %d\n" , a);
  printf("e is %d\n" , e);
  printf("i is %d\n" , i);
  printf("o is %d\n" , o);
  printf("u is %d\n" , u);
}