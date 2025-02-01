#include<stdio.h>
int main(){
    int num = 982;
    int significant = num; 
    while (significant >= 10) {
        significant /= 10;
        }
        printf("Most significant digit: %d", significant);
}