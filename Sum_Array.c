#include <stdio.h>
int main(){
    int a[5];
    int b[5];
    int c[5];
    int i;
    printf("Enter the elements of 1st array: ");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the elements of the 2nd array: ");
    for(i=0; i<5;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<5;i++){
        c[i] = a[i]+b[i];
    }
    printf("\nThe sum of 1st and 2nd array is: ");
    for(i=0;i<5;i++){
        printf("%d ",c[i]);
    }
    return 0;
}