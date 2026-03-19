#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
int mat[5][5] = {{1, 0, 0, 0, 0},
{0, 1, 0, 0, 0},{0, 0, 1, 0, 0},
{0, 0, 0, 1, 0},{0, 0, 0, 0, 1}};

int i, j;
int isZero = 1, isIdentity = 1, isDiag = 1, isScalar = 1;
int isUpper = 1, isLower = 1, isSym = 1, isSkew = 1;

 // Square or Rectangular Matrix
    if (rows == cols)
        printf("Square Matrix\n");
    else
       printf("Rectangular Matrix\n");

    for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
    // zero matrix
            if (mat[i][j] != 0)
                isZero = 0;

//identity matrix
    if (i == j && mat[i][j] != 1) isIdentity = 0;
    if (i != j && mat[i][j] != 0) isIdentity = 0;

//Diagonal Matrix
    if (i != j && mat[i][j] != 0)
                isDiag = 0;

//Upper Triangular
    if (i > j && mat[i][j] != 0)
                isUpper = 0;

//Lower Triangular
    if (i < j && mat[i][j] != 0)
                isLower = 0;

// Symmetric matrix
    if (rows == cols && mat[i][j] != mat[j][i])
                isSym = 0;

// Skew-Symmetric matrix
  if (rows == cols && mat[i][j] != -mat[j][i])
                isSkew = 0;
        }
    }
//Scalar Matrix
    if (isDiag) {
        for (i = 1; i < rows; i++)
            if (mat[i][i] != mat[0][0]) isScalar = 0;
    } else {
        isScalar = 0;
    }

if (isZero)     
printf("Zero Matrix\n");
if (isIdentity) 
    printf("Identity Matrix\n");
if (isDiag) 
    printf("Diagonal Matrix\n");
if (isScalar)  
    printf("Scalar Matrix\n");
if (isUpper)
  printf("Upper Triangular Matrix\n");
 if (isLower)    
printf("Lower Triangular Matrix\n");
if (isSym)   
    printf("Symmetric Matrix\n");
if (isSkew)     
    printf("Skew-Symmetric Matrix\n");

if (rows == 1)  
   printf("Row Matrix\n");
if (cols == 1) 
   printf("Column Matrix\n");

    return 0;
}
