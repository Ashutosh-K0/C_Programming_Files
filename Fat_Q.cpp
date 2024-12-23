/*Find the number of prime divisors of a number and then find the difference between the smallest prime divisor and the number itself.*/

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int N;
    printf("Enter the number which needs to be checked: ");
    scanf("%d", &N);

    int prime_divisors[100]; // Array to store prime divisors
    int count = 0;

    // Find divisors and check for primality
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && is_prime(i)) {
            prime_divisors[count++] = i; // Store prime divisor
        }
    }

    // If there are no prime divisors
    if (count == 0) {
        printf("No prime divisors found.\n");
        return 0;
    }

    // Find the smallest prime divisor (already stored in order)
    int smallest_prime_divisor = prime_divisors[0];

    // Print the prime divisors
    printf("Prime divisors of %d are: ", N);
    for (int i = 0; i < count; i++) {
        printf("%d ", prime_divisors[i]);
    }

    // Calculate the difference
    int difference = N - smallest_prime_divisor;
    printf("\nDifference between %d and its smallest prime divisor (%d) is: %d\n", N, smallest_prime_divisor, difference);

    return 0;
}

