#include <stdio.h>
int main(){
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][2] = {{10,11},{20,21},{30,31}};
    int C[2][2] ;
    for(int i=0;i<2;i++){
    for(int k=0;k<2;k++){
        int prod = 0;
        for(int j=0;j<3;j++){
            prod += A[i][j]*B[j][k];
        }
        C[i][k] = prod;
    }
    }
    printf("Result of matrix multiplication is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
