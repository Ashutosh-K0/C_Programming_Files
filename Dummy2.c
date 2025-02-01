#include <stdio.h>

int main() {
    int N = 20;
    int arr[20] = {0};  

   
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            arr[i] = i;
        }
    }

   
    printf("Divisors of 2 and 3 are:\n");
    for (int i = 0; i < N; i++) {
        if (arr[i] != 0 || i == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
