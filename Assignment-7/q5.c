#include <stdio.h>
#define N 3 

void printmatrix(int matrix[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void swap(int* p,int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void rotate(int matrix[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            swap(&matrix[i][j],&matrix[j][i]);
        }
    }
    int start = 0;
    int end = N-1;
    while(start<end){
        for(int i=0;i<N;i++){
            int temp = matrix[start][i];
            matrix[start][i] = matrix[end][i];
            matrix[end][i] = temp;
        }
        start++;
        end--;
    }
}
int main(){
    int matrix[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    printmatrix(matrix);
    printf("After rotating:\n");
    rotate(matrix);
    printmatrix(matrix);
}
