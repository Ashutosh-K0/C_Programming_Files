#include <stdio.h>

int main() {
    int N, X;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N + 2];
    printf("Enter the elements: ");
    for (int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &X);

    arr[0] = X; 
    arr[N + 1] = X; 

    printf("Modified list: ");
    for (int i = 0; i < N + 2; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
