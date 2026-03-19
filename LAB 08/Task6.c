#include <stdio.h>

int main() {
int i, j, k;
int r1=3,c1=3,r2=3,c2=3;
int A[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9} };

int B[3][3] = { {9, 8, 7},{6, 5, 4},
        {3, 2, 1} };

    int C[3][3]={0};


    if (c1!= r2) {
    printf("Error: Columns of A must equal Rows of B .\n");
  }

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
        C[i][j] += A[i][k] * B[k][j];
  printf("Matrix A:\n");  
    for (i = 0; i < r1; i++) {
   for (j = 0; j < c1; j++){
            printf(" %4d ", A[i][j]);
   }
        printf("\n");
    }

   printf("Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++){
            printf(" %4d ", B[i][j]);
    }
        printf("\n");
    }
    printf("Matrix A x Matrix B:\n");
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++){
            printf(" %4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
