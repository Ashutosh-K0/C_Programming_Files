#include <stdio.h>

int main() {
    int n, A, B;

    // Prompt the user to enter their choice
    printf("Enter the choice: ");
    scanf("%d", &n);

    // Check if the choice is valid
    if (n < 1 || n > 4) {
        printf("The Choice entered is wrong.\n");
    } else {
        // If the choice is valid, proceed with taking the numbers
        printf("Enter number 1 and number 2: ");
        scanf("%d %d", &A, &B);

        // Perform the operation based on the user's choice
        if (n == 1) {
            int sum = A + B;
            printf("The sum is: %d\n", sum);
        } else if (n == 2) {
            int sub = A > B ? A - B : B - A;
            printf("The subtraction is: %d\n", sub);
        } else if (n == 3) {
            int Mul = A * B;
            printf("The multiplication is: %d\n", Mul);
        } else if (n == 4) {
            if (B != 0) {
                int div = A / B;
                printf("The division is: %d\n", div);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        }
    }

    return 0;
}
