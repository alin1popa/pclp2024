#include <stdio.h>

void f() {
    {
        static int x;
        int y=0;
        printf("x=%d, y=%d\n", x, y);
        x++;
        y++;
    }
    // printf("%d", x);
}

int  main() {
    // for (int i=0, j=0; i<10, j<5; i++, j+=2) {
    //     printf("%d %d\n", i, j);
    // }

    int v[100];

    v[3]; // *(v+3) // *(3+v) // 3[v]
    int x;
    printf("%p\n", &x);
}