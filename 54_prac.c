//To delete a value from the last postion of an array.
#include<stdio.h>

void main(){
    int a[5],i;
    int n=5;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d" , &a[i]);
    }
    n--;
    printf("Array after deleting the is:\n");
    for(i=0;i<n;i++){
        printf("%d\t" , a[i]);
    }
}