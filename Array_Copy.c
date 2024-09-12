#include <stdio.h>

int main(){
    int a[100];
    int b[100];
    int i,n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("\nThe element for index %d = ",i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n;i++){
        b[i] = a[i];
    }
    printf("After copying the elements:-");
    for(i=0;i<n;i++){
        printf("\nThe elements for index %d = %d",i,b[i]);
    }

    return 0;
}