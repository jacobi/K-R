#include <stdio.h>
#define swap(t, x, y) t z = x; x = y; y = z;

int main(void) {
    int a, b;

    a = 5;
    b = 6;

    printf("%d:%d\n", a, b);
    swap(int, a, b);
    printf("%d:%d\n", a, b);

    return 0;
}
