#include <stdio.h>

void f(int x) {
    x++;
}

void f2(int *addr_x) {
    *addr_x = *addr_x + 1;
}

int main() {
    int x = 5;
    int *p = &x;
    printf("%d\n", x);
    printf("%p\n", p);
    // f(x);
    f2(p);
    printf("%d\n", x);
}