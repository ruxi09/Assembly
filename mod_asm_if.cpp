#include <stdio.h>

int foo(int a, int b) {
    int result;

    // TODO: Write the self-modifying assembly code here 
    // asm volatile ();

    return result;
}

int main() {
    int a = 3, b = 2;
    printf("result is %d\n", foo(a, b));
    return 0;
}
