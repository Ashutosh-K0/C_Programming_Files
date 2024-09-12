#include<stdio.h>

int main(){
    int a[100];
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("\nEnter the element of index %d = ",i);
        scanf("%d", &a[i]);
    }
    int sum = a[1] + a[n-2];
    printf("\nThe sum of second and second last element of the array is: %d", sum);
    return 0;
}