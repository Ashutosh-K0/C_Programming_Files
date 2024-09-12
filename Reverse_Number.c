#include <stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=0){
        printf("%d", num%10);
        num = num/10;
        count++;
        
    }
    printf("\n");
    printf("The Number of digits are: %d",count);

    return 0;
}