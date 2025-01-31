#include <stdio.h>
#define hello 1

int main(void) {
    int a = hello + 1, b;
    //hello++; // This line causes the error and has been commented out
    b = hello;
    printf("%d %d\n", a, b);
    return 0;
}
