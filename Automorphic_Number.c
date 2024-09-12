#include<stdio.h>
void isAutomorphic(int N);

int main(){
   int N;
   int temp,temp1;
   int S;
   printf("Enter the Number to be checked: ");
   scanf("%d", &N);
   
   isAutomorphic(N);
   return 0;
}
void isAutomorphic(int N){
   int temp,i,S;
   int arr[10];
   S= N*N;
   printf("%d is the square of the number %d\n",S,N);
   while(S>0){
      arr[i] = S%10;
      S= S/10;
      for(int i=0;i<10;i++){
         printf("%d",arr[i]);
      }
   }
}