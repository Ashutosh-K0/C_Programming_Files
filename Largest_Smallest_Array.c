#include<stdio.h>
#include<math.h>

int main(){
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[N-1];
    for(int i=0;i<N;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("Largest Element: %d\n",largest);
    printf("Smallest Element: %d\n",smallest);

    return 0;
}