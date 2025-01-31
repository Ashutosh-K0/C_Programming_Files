#include <stdio.h>

int main() {
    int N, M;
    printf("Enter the number of bikes and cars: ");
    scanf("%d %d", &N, &M);
    int totalTyres = (N * 2) + (M * 4);
    printf("Total number of tyres on the road: %d\n", totalTyres);
    return 0;
}
