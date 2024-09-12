#include<stdio.h>
int main(){
    int x,y,i,j;
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
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<x;i++){
        int sumR = 0;
        int sumC = 0;
        for(j=0;j<y;j++){
            sumR += arr[i][j];
            sumC += arr[j][i];
        }
        printf("SumR is: %d and sumC is: %d\n",sumR,sumC);
    }
    return 0;
}