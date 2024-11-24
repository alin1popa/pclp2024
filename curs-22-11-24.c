#include <stdio.h>

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

int multiply_by_2(int x) {
    return x * 2;
}

int main() {

    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        v[i] = multiply_by_2(v[i]);
    }

}