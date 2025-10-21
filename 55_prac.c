//To delete any value from an array,
#include<stdio.h>

void main(){
    int a[5],i,j,n,value;
    printf("Enter the elements of the array\n");
    for(i=0;i<5;i++){
        scanf("%d" , &a[i]);
    }
    n=5;
    printf("Enter the value to be deleted\n");
    scanf("%d" , &value);
    for(i=0;i<n;i++){
        if(a[i]==value){
            for(j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
        }
    }
    printf("The array after deletion is:\n");
    for(i=0;i<n;i++){
        printf("%d\t" , a[i]);
    }
}