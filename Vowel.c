#include <stdio.h>

int main(){
    char C;
    printf("Enter the character: ");
    scanf("%c", &C);
    if(C=='a'|| C=='A'|| C=='e'|| C=='E'|| C=='i'|| C=='I'|| C=='o'|| C=='O'|| C=='u'|| C=='U'){
        printf("The enter character is a vowel");
    }else{
        printf("The entered character is a consonant");
    }
}
