#include<stdio.h>

void main(){
    int n,i;
    printf("Enter any natural number\n");
    scanf("%d" , &n);
    printf("Natural number upto %d are:\n" , n);
    for(i=1;i<=n;i++){
        printf("%d\n" , i);
}
}