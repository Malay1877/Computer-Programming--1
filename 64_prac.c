// Creating a calculator usinng different functions. 

#include<stdio.h>

int add(int x , int y){
    printf("The addition of the two numbers is %d\n" , x+y);
}
int sub(int x , int y){
    printf("The difference between the two numbers is %d\n" , x-y);
}
int mult(int x , int y){
    printf("The product of the two numbers is %d\n" , x*y);
}
int div(int x , int y){
    printf("The division of the two numbers is %d\n" , x/y);
}

int main(){
    int a,b;
    char opr;
    printf("Enter the first number\n");
    scanf("%d" , &a);
    printf("Enter the second number\n");
    scanf("%d" , &b);
    printf("Enter which operation is to be done between the numbers\n");
    scanf(" %c" , &opr);    // Whenever you use char input use it with a space as it might skip the input without it.
    switch(opr){
        case'+':
            add(a,b);
            break;
        case'-':
            sub(a,b);
            break;
        case'*':
            mult(a,b);
            break;
        case'/':
            div(a,b);
            break;
    }
    return 0;
}