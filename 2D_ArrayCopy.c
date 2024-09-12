#include<stdio.h>
int main(){
    int x, y, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &x);
    printf("Enter the number of columns: ");
    scanf("%d", &y);

    int arr[100][100];
    int ar[100][100];

    // Input the original matrix
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the original matrix
    printf("Original Matrix\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Copy elements from arr to ar
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            ar[i][j] = arr[i][j];  // Using i and j to copy elements
        }
    }

    // Display the copied matrix
    printf("Copy of the matrix\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
