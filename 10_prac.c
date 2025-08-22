#include<stdio.h>

void main(){
    float A , B , Largest , Smallest;
    printf("Enter Two Numbers\n");
    scanf("%f %f" , &A , &B);
    Largest = A;
    if(B > Largest){
        Largest = B;
    }
    Smallest = A;
    if(B<Smallest){
        Smallest = B;
    }
    printf("The Largest Number is %f\n" , Largest);
    printf("The Smallest Number is %f\n" , Smallest);


}