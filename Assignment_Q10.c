#include <stdio.h>

void func(int x);

int main(void) {
    func(5);
    func(6);
    return 0;
}

void func(int x) {
    int a = x * x;
    printf("%d\n", a);
    a++;
}
