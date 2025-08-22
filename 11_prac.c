#include<stdio.h>

void main(){
    float A , B , C , Largest , Smallest;
    printf("Enter Three Numbers:\n");
    scanf("%f %f %f" , &A , &B , &C);
    Largest = A;
    if(B>Largest){
        Largest = B;
    }
    if(C> Largest){
        Largest = C;
    }
    Smallest = A;
    if(B<Smallest){
        Smallest = B;
    }
    if(C<Smallest){
        Smallest = C;
    }
    printf("The Largest Number is %f\n" , Largest);
    printf("The Smallest Number is %f" , Smallest);
}