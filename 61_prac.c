//  Function to calculate a raised to power b.

#include<stdio.h>

int power(int x, int y){
    int ans=1;
    for(int i=1;i<=y;i++){
        ans=ans*x;
    }
     printf("%d raised to %d is %d\n", x , y , ans);
    
}

int main(){
    int a , b;
    printf("Enter any number\n");
    scanf("%d" , &a);
    printf("Enter the power\n");
    scanf("%d" , &b);
    power(a,b);
    return 0;
}