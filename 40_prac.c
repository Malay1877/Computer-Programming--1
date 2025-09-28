//Minimum notes required.
#include<stdio.h>

void main(){
    int a[9]={500,200,100,50,20,10,5,2,1},i,c,amount;
    printf("Enter any amount\n");
    scanf("%d" , &amount);
    printf("The notes required are:\n");
    for(i=0;i<9;i++){
        c = amount/a[i];
        if(c>0){
            printf("%d of %d\n" ,c,a[i]);
            amount=amount-(c*a[i]);
        } 
    }
}