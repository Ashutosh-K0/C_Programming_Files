#include<stdio.h>
int main(){
    int x, y, i, j,k,l;

    printf("Enter the number of rows: ");
    scanf("%d", &x);
    printf("Enter the number of columns: ");
    scanf("%d", &y);

    int arr[100][100];
    int ar[100][100];
    int sum[100][100];

    // Input the original matrix
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            scanf("%d", &arr[i][j]);
            scanf("%d", &ar[i][j]);
        }
    }
    printf("Matrix 1\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Matrix\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            sum[i][j] = arr[i][j]+ar[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
