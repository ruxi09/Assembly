#include <stdio.h>

int foo(int a, int b) {
    int result;

    if (a > 0) {
        return a + b;
    } else {
        a = - a;
        return a + b;
    }

    return result;
}

int main() {
    int a = 3, b = 2;
    printf("result is %d\n", foo(a, b));
    return 0;
}
