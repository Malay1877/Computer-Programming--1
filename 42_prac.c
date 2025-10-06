// Multiply two 2D-arr and store them in 3rd one.
#include<stdio.h>

void main(){
    int A[2][2]={{1,2},
                {3,2}};
    int B[2][2]={{4,2},
                {2,6}};
    int C[2][2] , i , j , k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             C[i][j]=0;
             for(k=0;k<2;k++){
                C[i][j]+=A[i][k]*B[k][j];
             }
        }
    }
    printf("The resultant Matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d " , C[i][j]);
        }
        printf("\n");
    }
}