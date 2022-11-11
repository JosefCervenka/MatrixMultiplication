#include <stdio.h>
#define M 3
#define N 3

int matrixA[M][N] = {
        {
            1,2,2
        },
        {
            3,4,2
        },
        {
            5,6,2
        }
};
int matrixB[N][M] = {
        {
            1,2,3
        },{
            4,5,6
        },
        {2,2,2}
};
int matrixC[M][M] = {0};

void MultiplyMatrix(size_t m, size_t n, int matrixA[M][N], int matrixB[N][M]);
void PrintMatrix(size_t m, size_t n, int matrix[M][N]);

int main() {
    MultiplyMatrix(M,N,matrixA, matrixB);
    PrintMatrix(M,M,matrixC);
    return 0;
}

void PrintMatrix(size_t m, size_t n, int matrix[m][n]){
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
}

void MultiplyMatrix(size_t m, size_t n, int matrixA[m][n], int matrixB[n][m]){
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                int a = matrixA[i][k];
                int b = matrixB[k][j];
                matrixC[i][j] += a*b;
            }
        }
    }
}

