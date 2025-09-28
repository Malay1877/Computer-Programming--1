#include<stdio.h>

void main(){
    int i,a[5];
    printf("Enter any five values\n");
    for(i=0;i<5;i++){
        scanf("%d" , &a[i]);
    }
    for(i=0;i<5;i++){
    printf("%d\t" , a[i]);
    }
}