#include <stdio.h>

#define FLOAT_THRESHOLD 0.0001

double absolute(double x) {
    return x >= 0 ? x : -x;
}

int main() {
    float a;
    float b;
    float sum;
    // int d;

    a = 0.1;
    b = 0.2;

    sum = a+b;

    if (absolute(sum-0.3) < FLOAT_THRESHOLD) {
        printf("yassss\n");
    } else {
        printf("fuuuuu\n");
    }
    // d;
    return 0;
}