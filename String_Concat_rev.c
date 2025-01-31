#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10], concatStr[20];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    strcpy(concatStr, str1);
    strcat(concatStr, str2);

    strrev(concatStr); // Directly reverse the string

    printf("Concatenated and reversed string: %s\n", concatStr);
    return 0;
}
