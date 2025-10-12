Q73:Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    int rowSum[m];   

    
    printf("Enter elements of the matrix (%d x %d):\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < m; i++) {
        rowSum[i] = 0;  
        for(j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    
    printf("\nSum of each row:\n");
    for(i = 0; i < m; i++) {
        printf("Row %d sum = %d\n", i+1, rowSum[i]);
    }

    return 0;
}
