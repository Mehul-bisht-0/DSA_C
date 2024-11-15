#include<stdio.h>
#define M 4
#define N 3

int main(){
    int A[M][N];
    int i, j;
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            A[i][j]=i+j;
        }
    }
    for(i=0;i<M;i++){
        printf("\nRow %d: ", i);
        for(j=0;j<N;j++){
            printf("%d", A[i][j]);
        }
    }
}