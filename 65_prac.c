// Function to find the max and min value from an array 

#include<stdio.h>

void find(int arr[] , int n  , int*max , int*min){ // For call by reference we need to use pointers.
    *max=*min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
}

int main(){
    int arr[100],n,i,max,min;
    printf("Enter the number of elements in the array\n");
    scanf("%d" , &n);
    printf("Enter %d elements of the array\n" , n);
    for(i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    find(arr,n,&max,&min); // Address of max and min is passed for the call by reference.
    printf("The maximum value is %d\n" , max);
    printf("The minimum value is %d\n" , min);
    return 0;
}
