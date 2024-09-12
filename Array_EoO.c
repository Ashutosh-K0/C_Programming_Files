// To count the number of even and odd numbers in a given array.
#include <stdio.h>
int main(){
    int count = 0;
    int temp = 0;
    int i;
    int num[10];
    printf("Enter the elements of the array:\n");
    for(i = 0; i<10; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<10;i++){
        if(num[i]%2==0){
            count++;
        }
        if(num[i]%2!=0){
            temp++;
        }
    }
    printf("Even Number are: ");
    for(int i =0; i<10;i++){
        if(num[i]%2==0){
            printf("%d ", num[i]);
        }
    }
    printf("\n");
    printf("Odd numbers are: ");
    for(int i =0; i<10;i++){
        if(num[i]%2!=0){
            printf("%d ", num[i]);
        }
    }
    printf("\nThe number of even number are: %d\n",count);
    printf("The number of odd number are: %d",temp);

    return 0;

}