#include <stdio.h>

int main() {
    int N, temp;
    int Sum = 0;
    int count = 0;

    // Taking input
    printf("Enter the number whose sum is to be calculated: ");
    scanf("%d", &N);

    temp = N; 

    while (temp > 0) {
        int digit = temp % 10; 
        Sum += digit;          
        count++;               
        temp /= 10;            
    }

    printf("Sum is: %d\n", Sum);
    printf("Digits are: %d\n", count);

    return 0;
}
