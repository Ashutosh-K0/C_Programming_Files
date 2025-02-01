#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;

    // Reverse the first part of the array (0 to k-1)
    for (int i = 0; i < k / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[k - 1 - i];
        arr[k - 1 - i] = temp;
    }

    // Reverse the second part of the array (k to n-1)
    for (int i = k; i < (n + k) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n + k - 1 - i];
        arr[n + k - 1 - i] = temp;
    }

    // Reverse the whole array (0 to n-1)
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int arr[n];
    int k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("Enter the times array to be rotated: ");
    scanf("%d",&k);
    
    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, k);

    printf("Array after rotating by %d steps: ", k);
    printArray(arr, n);

    return 0;
}
