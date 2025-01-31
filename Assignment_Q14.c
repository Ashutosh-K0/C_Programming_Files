#include <stdio.h>

int main() {
    int a = 5, b = 12, c = 0;

    c = (a & b) && ((b >> 2) | (a << 1));
    printf("Step 1: c = %d\n", c);

    if ((a ^ b) || (c & ~b)) {
        c = (a | b) && !(b & a);
        printf("Step 2: c = %d\n", c);
    } else {
        c = (~a | b) && (b ^ c);
        printf("Step 3: c = %d\n", c);
    }

    c = (c << 1) | (c >> 1);
    printf("Final c = %d\n", c);

    return 0;
}
