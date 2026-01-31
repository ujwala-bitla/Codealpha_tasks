#include <stdio.h>

void addition(int r, int c, int A[r][c], int B[r][c]) {
    int i,j;
    printf("\nAddition Result:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r, int c, int A[r][c]) {
    int i,j;
    printf("\nTranspose:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}

void multiplication(int r1,int c1,int A[r1][c1],int r2,int c2,int B[r2][c2]) {
    if(c1 != r2){
        printf("\nMultiplication not possible");
        return;
    }

    int C[r1][c2];
    int i,j,k;

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            C[i][j]=0;
            for(k=0;k<c1;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    printf("\nMultiplication Result:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r=2,c=2;
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{5,6},{7,8}};

    addition(r,c,A,B);
    transpose(r,c,A);
    multiplication(2,2,A,2,2,B);

    return 0;
}