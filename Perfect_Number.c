#include <stdio.h>
int main(){
    int num;
    int i=1;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(i<num)
    {
        if(num%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        i=i+1;
    }
    printf("= %d",sum);

    if(sum==num){
        printf("\nThe number is a Perfect Number");
    }else{
        printf("\nThe number is not a Perfect Number");
    }

    return 0;
}
