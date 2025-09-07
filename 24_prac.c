#include<stdio.H>

void main(){
    int n,i;
    printf("Enter any Number\n");
    scanf("%d" , &n);
    printf("Odd numbers upto %d are:\n" , n);
    for(i=1;i<=n;i=i+2){
        printf("%d\n" , i);
    }
}