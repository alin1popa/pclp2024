#include <stdio.h>

int factorial_rec(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_rec(n-1);


    
}

int factorial_iter(int n) {
    int p = 1;
    for (int i=1; i<=n; i++) {
        p *= i;
    }
    return p;
}

int main() {
    int n;
    scanf("%d", &n);
    // n = 3;

    printf("%d\n", factorial_rec(n));
    printf("%d\n", factorial_iter(n));

    // int i=0;
    // do {
    //     if (!(i<n)) {
    //         break;
    //     }
    //     printf("%d ", i++);
    // } while (1);

    // int wasFound = 0;

    // for (int i=0; i<n && !wasFound; i++) {
    //     for (int j=0; j<n && !wasFound; j++) {
    //         for (int k=0; k<n; k++) {
    //             printf("%d %d %d\n", i, j, k);
    //             if (i*j*k == 4) {
    //                 printf("Am gasit! Iesim din bucle\n");
    //                 wasFound=1;
    //                 break;
    //             }
    //         }
    //         // if (wasFound) {
    //         //     break;
    //         // }
    //     }
    //     // if (wasFound) {
    //     //     break;
    //     // }
    // }


    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         for (int k=0; k<n; k++) {
    //             printf("%d %d %d\n", i, j, k);
    //             if (i*j*k == 4) {
    //                 printf("Am gasit! Iesim din bucle\n");
    //                 goto finish;
    //             }
    //         }
    //         // if (wasFound) {
    //         //     break;
    //         // }
    //     }
    //     // if (wasFound) {
    //     //     break;
    //     // }
    // }

    // finish:

    printf("\n");
}