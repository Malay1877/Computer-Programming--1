#include<stdio.h>

void main(){
    int a[5],i,pos,value;
    printf("Enter any four values for the array\n");
    for(i=0;i<4;i++){
        scanf("%d" , &a[i]);
    }
    printf("Enter the position (0 to 4) to insert the value in the given array\n");
    scanf("%d" , &pos);
    printf("Enter the value to be inserted\n");
    scanf("%d" , &value);
    for(i=3;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=value;
    printf("The array after insertion is:\n");
    for(i=0;i<5;i++){
        printf("%d\t" , a[i]);
    }
}
