#include<stdio.h>
int main() {
    int m, n, a, b, k, i, j;
    int sum;
    int c[100][100];
    
    // Input dimensions for the first matrix
    printf("Enter the number of rows for the 1st matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for the 1st matrix: ");
    scanf("%d", &n);
    int mat_A[100][100];

    // Input dimensions for the second matrix
    printf("Enter the number of rows for the 2nd matrix: ");
    scanf("%d", &a);
    printf("Enter the number of columns for the 2nd matrix: ");
    scanf("%d", &b);
    int mat_B[100][100];

    // Input elements for the first matrix
    printf("Enter elements for the 1st matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat_A[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the 2nd matrix:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &mat_B[i][j]);
        }
    }

    // Print the first matrix
    printf("Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", mat_A[i][j]);
        }
        printf("\n");
    }

    // Print the second matrix
    printf("Matrix B:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("%d\t", mat_B[i][j]);
        }
        printf("\n");
    }

    // Check if multiplication is possible
    if (n != a) {
        printf("Matrix multiplication is not possible.\n");
    } else {
        // Perform matrix multiplication
        for (i = 0; i < m; i++) {
            for (j = 0; j < b; j++) {
                sum = 0;
                for (k = 0; k < n; k++) {  // Should be k < n, not m
                    sum += mat_A[i][k] * mat_B[k][j];  // Use correct matrix names
                }
                c[i][j] = sum;  // Assign value, not declare
            }
        }

        // Print the resulting matrix
        printf("Product Matrix:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < b; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
