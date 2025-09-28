#include<stdio.h>

void main(){
    int i,a[10];
    printf("Enter any Ten values\n");
    for(i=0;i<10;i++){
        scanf("%d" , &a[i]);
    }
    printf("The 4th values is %d\n" , a[3]);
    printf("The 7th values is %d\n" , a[6]);
    printf("The 9th values is %d\n" , a[8]);
}