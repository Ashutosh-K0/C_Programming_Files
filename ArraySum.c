#include <stdio.h>
int main(){
    int sum=0;
    int marks[5];
    printf("Enter the elements of the array:-\n");
    for(int i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    for(int i=0;i<5;i++){
        sum +=marks[i];
    }
    int Avg = sum/5;
    printf("The marks of students are: ");
    for(int i=0;i<5;i++){
       printf("%d ",marks[i]);
    }
    printf("\nThe sum of marks are: %d",sum);
    printf("\nThe Average is: %d",Avg);

    return 0;
}