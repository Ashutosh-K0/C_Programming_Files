#include<stdio.h>

void isPalindrome(int N);
int main(){
    int N;
    printf("Enter the Number: ");
    scanf("%d", &N);
    isPalindrome(N);
    return 0;
}

void isPalindrome(int N){
    int ori_N = N, rev_N = 0, remainder;
    
    // Reverse the number
    while(N != 0){
        remainder = N % 10;
        rev_N = rev_N * 10 + remainder;
        N = N / 10;
    }

    // Check if it's a palindrome
    int is_palindrome = (ori_N == rev_N);
    
    // Check if it's a multiple of 11
    int is_multiple_of_11 = (ori_N % 11 == 0);
    
    // Printing result based on both conditions
    if(is_palindrome && is_multiple_of_11){
        printf("%d is a palindrome and a multiple of 11.\n", ori_N);
    } else if(is_palindrome && !is_multiple_of_11){
        printf("%d is a palindrome but not a multiple of 11.\n", ori_N);
    } else if(!is_palindrome && is_multiple_of_11){
        printf("%d is not a palindrome but is a multiple of 11.\n", ori_N);
    } else {
        printf("%d is not a palindrome and not a multiple of 11.\n", ori_N);
    }
}
