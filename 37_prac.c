//sorting an array of size 5 in ascending order.

#include<stdio.h>

void main(){
    int a[5],i,j,temp;
    printf("Enter any 5 values\n");
    for(i=0;i<5;i++){
        scanf("%d" , &a[i]);
    }
    for(j=0;j<4;j++){
        for(i=0;i<4-j;i++){
            if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    for(i=0;i<5;i++){
    printf("%d\t" , a[i]);
}
}
