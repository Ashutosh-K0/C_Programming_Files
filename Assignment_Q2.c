#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    
    printf("%d\n", *(p + 3));
    printf("%d\n", *(++p + 2));
    
    return 0;
}
