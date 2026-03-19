#include <stdio.h>

int main() {
    int  mat[3][3] = { {1, 2, 3},{4, 5, 6},{7, 8, 9}};
    
    int  trans[3][3], cof[3][3], adj[3][3], inv[3][3];
    int  det = 0;
    int i, j, k;

//Transpose
printf("Transpose:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            trans[j][i] = mat[j][i];
            printf("%d ", trans[j][i]);
    }
        printf("\n");
    }
 //Determinant
    for (i = 0; i < 3; i++)
det += mat[0][i] * (mat[1][(i+1)%3] *mat[2][(i+2)%3]  - mat[1][(i+2)%3] * mat[2][(i+1)%3]);

    printf("Determinant:%d\n", det);

//Cofactor Matrix
    cof[0][0] =  (mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]);
    cof[0][1] = -(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]);
    cof[0][2] =  (mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
    cof[1][0] = -(mat[0][1]*mat[2][2] - mat[0][2]*mat[2][1]);
    cof[1][1] =  (mat[0][0]*mat[2][2] - mat[0][2]*mat[2][0]);
    cof[1][2] = -(mat[0][0]*mat[2][1] - mat[0][1]*mat[2][0]);
    cof[2][0] =  (mat[0][1]*mat[1][2] - mat[0][2]*mat[1][1]);
    cof[2][1] = -(mat[0][0]*mat[1][2] - mat[0][2]*mat[1][0]);
    cof[2][2] =  (mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0]);

    printf("Cofactor Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf(" %d ", cof[i][j]);
        printf("\n");
    }
 // Adjoint
   printf("Adjoint:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            adj[j][i] = cof[j][i];
            printf(" %d", adj[j][i]);
            }
        printf("\n");
    }
  // Inverse
    if (det == 0) {
        printf("Matrix is Singular. Inverse does not exist.\n");
    } else {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
        inv[i][j] = adj[i][j] / det;
        printf("Inverse matrix:%d ", inv[i][j]);
            printf("\n");
        }

    return 0;
}
