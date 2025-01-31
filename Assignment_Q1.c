#include <stdio.h>

int main() {
    int x = 10, y = 0, z = 5;
    if (x > y && ++z > x) {
        z += 2;
    }
    printf("z = %d\n", z);
    return 0;
}
