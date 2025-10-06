//To find a value within an array.
#include<stdio.h>

 void main(){
    int a[5]={1,2,3,4,5} , i , value;
    printf("Enter the value to be searched\n");
    scanf("%d" , &value);
    for(i=0;i<5;i++){
        if(value == a[i]){
            printf("The value is found at index %d\n" , i);
        }
    }
    if(value!=a[i]){
            printf("The value is not found\n");
        }
 }