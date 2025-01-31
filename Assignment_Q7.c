#include <stdio.h>

int main() {
    int A, B, C, D;
    printf("Enter the prices and discounts for two TVs: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int priceFirst = A - C;
    int priceSecond = B - D;
    if (priceFirst < priceSecond) {
        printf("First\n");
    } else if (priceSecond < priceFirst) {
        printf("Second\n");
    } else {
        printf("Any\n");
    }
    return 0;
}
