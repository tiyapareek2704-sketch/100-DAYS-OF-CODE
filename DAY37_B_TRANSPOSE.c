Q74:Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], transpose[n][m];

    // Input matrix
    printf("Enter elements of the matrix (%d x %d):\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    printf("\nTranspose of the matrix (%d x %d):\n", n, m);
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
