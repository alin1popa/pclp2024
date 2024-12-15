#include <stdio.h>
#include <string.h>

int main() {
    int x = 0x12345678;
    // 0x12 0x34 0x56 0x78
    // 0x78 0x56 0x34 0x12

    printf("Char* iteration\n");
    for (unsigned char *p = (unsigned char *)&x; 
        p < (unsigned char *)&x + sizeof(x);
        p++) {
            printf("%x ", *p);
    }

    printf("\nMemcpy into v[4]\n");
    unsigned char v[4];
    memcpy(v, &x, sizeof(x));
    for (unsigned long i = 0; i < sizeof(x); i++) {
        printf("%x ", v[i]);
    }

    union TypePun {
        int x;
        unsigned char v[4];
    };
    union TypePun tp;
    tp.x = x;
    printf("\nUnion\n");
    for (unsigned long i = 0; i < sizeof(x); i++) {
        printf("%x ", tp.v[i]);
    }
}