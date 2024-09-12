#include<stdio.h>
int main(){
    int x,y,i,j;
    //int sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &x);
    printf("Enter the number of column: ");
    scanf("%d", &y);
    int arr[100][100];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original Matrix\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t", arr[i][j]);
            //sum += arr[i][j];
        }
        printf("\n");
    }
    printf("Transpose of the matrix\n");
     for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            printf("%d\t", arr[j][i]);
            //sum += arr[i][j];
        }
        printf("\n");
    }
    //printf("Sum is: %d",sum);
    return 0;
}